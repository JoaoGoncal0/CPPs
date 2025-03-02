#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {

    try
	{
		Intern I;
		Bureaucrat Neymar("Neymar", 1);
		AForm* rrf;

		std::cout << std::endl;
		rrf = I.makeForm("robotomy request", "Bender");

		if(rrf != NULL)
		{
			Neymar.signForm(*rrf);
			Neymar.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
		rrf = I.makeForm("presidential pardon", "Bender");

		if(rrf != NULL)
		{
			Neymar.signForm(*rrf);
			Neymar.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
		rrf = I.makeForm("shrubbery creation", "Bender");

		if(rrf != NULL)
		{
			Neymar.signForm(*rrf);
			Neymar.executeForm(*rrf);
			delete rrf;
		}
		std::cout << std::endl;
		rrf = I.makeForm("Some bullshit", "Bender");

		if(rrf != NULL)
		{
			Neymar.signForm(*rrf);
			Neymar.executeForm(*rrf);
			delete rrf;
		}

    } catch (std::exception &e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }
    return 0;
}
