#include <iostream>
#include <cctype>

std::string ToUpper(std::string str)
{
    std::string res = str;
    for (int i = 0; str[i]; i++)
        res[i] = toupper(str[i]);
    return (res);
}

int main    (int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
        for(int i = 1; av[i]; i++)
        {
            std::cout << ToUpper(av[i]);
            if (i < ac - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
}