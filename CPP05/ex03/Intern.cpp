
#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern Constructor called" << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern &copy) {
    std::cout << "Intern Copy Constructor called" << std::endl;
    (void)&copy;
}

Intern &Intern::operator=(const Intern &other) {
    std::cout << "Intern Copy Assingment operator called" << std::endl;
    (void)&other;
    return (*this);
}

AForm *Intern::makeForm(const std::string formName, const std::string &formTarget) {
    
    std::string forms[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	for(int i = 0; i < 3; i++)
	{
		if(formName.compare(forms[i]) == 0)
		{
			switch(i) {
				case 0:
				return new PresidentialPardonForm(formTarget);
				break;
				case 1:
				return new RobotomyRequestForm(formTarget);
				break;
				case 2:
				return new ShrubberyCreationForm(formTarget);
				break;
			}
		}
	}
	std::cout << "The Intern cant do magic, the Form doenst exist so maybe give a name that is correct" << std::endl;
	return NULL;
}
