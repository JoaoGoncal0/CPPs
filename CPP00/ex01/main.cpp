#include "phonebook.hpp"

int ft_strcmp(const std::string &str1, const std::string &str2)
{
    size_t length = std::min(str1.size(), str2.size());
    for (size_t i = 0; i < length; i++) {
        if (str1[i] != str2[i])
            return (1);
    }
    if (str1.size() != str2.size()) 
        return (1);
    return (0);
}

int main(void)
{
    PhoneBook Phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Chose either (Add, Search, Exit)" << std::endl;
        std::getline(std::cin, input);
        if (ft_strcmp(input, "Add") == 0)
            Phonebook.AddContact();
        else if (ft_strcmp(input, "Search") == 0)
            Phonebook.SearchContact();
        else if (ft_strcmp(input, "Exit") == 0)
            Phonebook.ExitProgram();
        else
            std::cout << "Input is incorrect but Happy New Year ;)" << std::endl;
    }
}