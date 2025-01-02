#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {
    this->index = 0;
    this->max = 0;
    std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "PhoneBook deleted" << std::endl;
}

void    PhoneBook::AddContact() {

    std::string input;

    if (this->index == 8)
        this->index = 0;
    std::cout << "Insert First Name" << std::endl;
    while (true) {
        std::getline(std::cin, input);  // Use std::getline to allow spaces in names
        if (input.empty()) {
            std::cout << "First name cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetFirstName(input);
            break;
        }
    }
    std::cout << "Insert Last Name" << std::endl;
     while (true) {
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Last name cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetLastName(input);
            break;
        }
    }
    std::cout << "Insert Nick Name" << std::endl;
     while (true) {
        std::getline(std::cin, input);  // Use std::getline to allow spaces in names
        if (input.empty()) {
            std::cout << "Nickname cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetNickname(input);
            break;
        }
    }
    std::cout << "Insert Phone Number" << std::endl;
     while (true) {
        std::getline(std::cin, input);  // Use std::getline to allow spaces in names
        if (input.empty()) {
            std::cout << "Phone number cannot be empty. Please try again: ";
        } else {
            this->contact[this->index].SetPhoneNumber(input);
            break;
        }
    }
    std::cout << "Insert Darkest Secret" << std::endl;
     while (true) {
        std::getline(std::cin, input);  // Use std::getline to allow spaces in names
        if (input.empty()) {
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

bool  PhoneBook::isValid(int index) {
  return (!this->contact[index].GetFirstName().empty());
}

void  PhoneBook::SearchContact() {
  int input;
  std::cout << std::right << "| ";
  PrintColumn("Index");
  PrintColumn("First Name");
  PrintColumn("Last Name");
  PrintColumn("Nickname");
  std::cout << std::endl;
  for(int i = 0; i <= this->max - 1; i++) {
    std::cout << std::right << "| " << std::setw(10) << i << " |";
    PrintList(i);
    std::cout << std::endl;
  }
  std::cout << "What contact do you wanna access" << std::endl;
  std::cin >> input;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  if (std::cin.fail() || input < 0) {
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cout << "Invalid input, please insert a valid number between 0 and " << this->max - 1 << std::endl;
  }
  else {
    if (input < 0 || input >= this->max || !this->isValid(input)) {
      std::cout << "No contact found at index " << input << std::endl;
      return ;
    }
    PrintContact(input);
  }
}

void  PhoneBook::ExitProgram() {
  exit(0);
}
