#ifndef INTERN_H
# define INTERN_H

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &other);

        AForm *makeForm(const std::string formName, const std::string &formTarget);
};

#endif