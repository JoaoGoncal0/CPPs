#include "Harl.hpp"

int main (int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: Please provide a"
        " level (DEBUG, INFO, WARNING, ERROR)"
        << std::endl;
        return (-1);
    }
    std::string level(av[1]);
    Harl harl;
    int logLevel = harl.getLevel(level);
    
    if (logLevel == -1) {
        std::cout << "I am not sure how tired"
        " I am today..."
        << std::endl;
        std::cout << "[ Probably complaining"
        " about insignificant problems ]"
        << std::endl;
    }
    else
        harl.complain(logLevel);
    return (0);
}