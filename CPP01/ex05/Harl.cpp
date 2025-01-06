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

void    Harl::complain(std::string level) {
    bool    found = false;
    for (int i = 0; i < 4; i++) {
        if (this->levels[i] == level) {
            (this->*func[i])();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "There is a invalid command don't"
        " try to trick Harl you can't :)"
        << std::endl;
    }
}