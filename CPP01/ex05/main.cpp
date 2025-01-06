#include "Harl.hpp"

int main(int ac, char **av) {
    Harl harl;

    if (ac < 2) {
        std::cerr << "Error: Please provide a"
        " level (DEBUG, INFO, WARNING, ERROR)"
        << std::endl;
        return (-1);
    }
    for (int i = 1; i < ac; i++) {
        std::string level(av[i]);
        harl.complain(level);
    }  
    return (0);
}