#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {
    this->index = 0;
    this->max = 0;
    std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "PhoneBook deleted" << std::endl;
}

int		check_input(std::string input) {
	for (int i = 0; i < input.length(); ++i)
		if (!isalnum(input[i]))
			return (1);
	return (0);
}

void    PhoneBook::AddContact() {

    std::string input;

    if (this->index == 8)
        this->index = 0;
    std::cout << "Insert First Name" << std::endl;
	while (true) {
        std::getline(std::cin, input);
        if (std::cin.eof() )
			    exit(0);
        if (input.empty() || check_input(input) == 1) {
            std::cout << "First name cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetFirstName(input);
            break;
        }
    }
    std::cout << "Insert Last Name" << std::endl;
    while (true) {
        std::getline(std::cin, input);
        if (std::cin.eof())
			    exit(0);
        if (input.empty() || check_input(input) == 1) {
            std::cout << "Last name cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetLastName(input);
            break;
        }
    }
    std::cout << "Insert Nick Name" << std::endl;
    while (true) {
        std::getline(std::cin, input);
        if (std::cin.eof())
			    exit(0);
        if (input.empty() || check_input(input) == 1) {
            std::cout << "Nickname cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetNickname(input);
            break;
        }
    }
    std::cout << "Insert Phone Number" << std::endl;
    while (true) {
        std::getline(std::cin, input);
        if (std::cin.eof())
			    exit(0);
        if (input.empty() || check_input(input) == 1) {
            std::cout << "Phone number cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetPhoneNumber(input);
            break;
        }
    }
    std::cout << "Insert Darkest Secret" << std::endl;
    while (true) {
        std::getline(std::cin, input);
        if (std::cin.eof())
			    exit(0);
        if (input.empty() || check_input(input) == 1) {
            std::cout << "Darkest Secret cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetDarkestSecret(input);
            break;
        }
    }
    this->index++;
    if (this->max != 8)
      this->max++;
}

void   PrintColumn(const std::string &str) {
  int width = 10;

  if ((int)str.length() >= width)
    std::cout << std::setw(width) << str.substr(0, width - 1) + "." << " |";
  else
    std::cout << std::setw(width) << str << " |";
}

void  PhoneBook::PrintList(int i) {
  PrintColumn(this->contact[i].GetFirstName());
  PrintColumn(this->contact[i].GetLastName());
  PrintColumn(this->contact[i].GetNickname());
}

void  PhoneBook::PrintContact(int i) {
  std::cout << "First Name: " << this->contact[i].GetFirstName() << std::endl;
  std::cout << "Last Name: " << this->contact[i].GetLastName() << std::endl;
  std::cout << "Nickname: " << this->contact[i].GetNickname() << std::endl;
  std::cout << "Phone Number: " << this->contact[i].GetPhoneNumber() << std::endl;
  std::cout << "Darkest Secret: " << this->contact[i].GetDarkestSecret() << std::endl;
}

void PhoneBook::SearchContact() {
  int input;
  std::string input_;
  std::cout << std::right << "| ";
  PrintColumn("Index");
  PrintColumn("First Name");
  PrintColumn("Last Name");
  PrintColumn("Nickname");
  std::cout << std::endl;
  for (int i = 0; i < this->max; i++) {
    std::cout << std::right << "| " << std::setw(10) << i << " |";
    PrintList(i);
    std::cout << std::endl;
  }
  while (true) {
	if (this->contact[0].GetFirstName().empty()) {
		std::cout << "There is not a single contact ADD one first" << std::endl;
		break;
	}
    std::cout << "Enter index of the contact to search (0 to " << this->max - 1 << "): ";
    std::getline(std::cin, input_);
    if (std::cin.eof())
			    exit(0);
    if (input_.empty()) {
      std::cout << "Empty space is not a valid index. Please try again." << std::endl;
      continue;
    }
    try {
      input = std::stoi(input_);
    } catch (const std::invalid_argument&) {
      std::cout << "Invalid input, please enter a valid number number between 0 and " << this->max - 1 << std::endl;
      continue;
    }
    if (input < 0 || input >= this->max) {
      std::cout << "Invalid index, please enter a valid number between 0 and " << this->max - 1 << std::endl;
      continue;
    } 
    PrintContact(input);
    break;
  }
}

void  PhoneBook::ExitProgram() {
  exit(0);
}
