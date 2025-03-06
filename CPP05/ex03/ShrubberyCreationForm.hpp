#ifndef SHRUBBERY_CREATION_FROM_H
# define SHRUBBERY_CREATION_FROM_H

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	private:
	std::string target;

	public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& other);

	std::string getTarget() const;
	int        execute(Bureaucrat const & executor) const;
};

#endif