#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

    try {
        Bureaucrat bob("Bob", 1);
        Bureaucrat jim("Jim", 1);
        Bureaucrat tom("Tom", 1);

        PresidentialPardonForm presForm("Criminal");
        RobotomyRequestForm robotForm("Test Subject");
        ShrubberyCreationForm shrubForm("OIOI");

        std::cout << "\n--- Tentando assinar os formulários ---\n";
        bob.signForm(presForm);
        jim.signForm(robotForm);
        tom.signForm(shrubForm);

        std::cout << "\n--- Tentando executar os formulários ---\n";
        bob.executeForm(presForm); 
        bob.executeForm(robotForm);
        jim.executeForm(robotForm);
        jim.executeForm(presForm);
        tom.executeForm(shrubForm);

    } catch (std::exception &e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    return 0;
}
