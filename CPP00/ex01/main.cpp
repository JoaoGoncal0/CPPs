#include "phonebook.hpp"

int main(void)
{
    PhoneBook Phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Chose either (ADD, SEARCH, EXIT)" << std::endl;
        std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
        if (input.compare("ADD") == 0)
            Phonebook.AddContact();
        else if (input.compare("SEARCH") == 0)
            Phonebook.SearchContact();
        else if (input.compare("EXIT") == 0)
            Phonebook.ExitProgram();
        else
            std::cout << "Input is incorrect but Happy New Year ;)" << std::endl;
    }
}