#include "phonebook.hpp"

int main(void)
{
    PhoneBook Phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Chose either (Add, Search, Exit)" << std::endl;
        std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
        if (input.compare("Add") == 0)
            Phonebook.AddContact();
        else if (input.compare("Search") == 0)
            Phonebook.SearchContact();
        else if (input.compare("Exit") == 0)
            Phonebook.ExitProgram();
        else
            std::cout << "Input is incorrect but Happy New Year ;)" << std::endl;
    }
}