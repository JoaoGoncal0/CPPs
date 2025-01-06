#include "Harl.hpp"

Harl::Harl(void) {
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    func[0] = &Harl::debug;
    func[1] = &Harl::info;
    func[2] = &Harl::warning;
    func[3] = &Harl::error;
    std::cout << "Harl is on!"
    << std::endl;
}

Harl::~Harl(void) {
    std::cout << "Harl is off!"
    << std::endl;
}

void    Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for"
    " my 7XL-double-cheese-triple-pickle-special"
    " ketchup burger. I really do!"
    << std::endl;
}

void    Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout <<  "I cannot believe adding"
    " extra bacon costs more money. You didn’t"
    " put enough bacon in my burger! If you did,"
    " I wouldn’t be asking for more!"
    << std::endl;
}

void    Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have"
    " some extra bacon for free. I’ve been coming"
    " for years whereas you started working here"
    " since last month."
    << std::endl;
}

void    Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want"
    " to speak to the manager now."
    << std::endl;
}

int     Harl::getLevel(const std::string &level) {
    if (level == "DEBUG")
        return (0);
    else if (level == "INFO")
        return (1);
    else if (level == "WARNING")
        return (2);
    else if (level == "ERROR")
        return (3);
    else
        return (-1);
}

void    Harl::complain(int level) {
    switch(level) {
        case 0:
            Harl::debug();
        case 1:
            Harl::info();
        case 2:
            Harl::warning();
        case 3:
            Harl::error();
            break;
        default:
            std::cout << "Error: Please provide a"
        " level (DEBUG, INFO, WARNING, ERROR)"
        << std::endl;
    }
}