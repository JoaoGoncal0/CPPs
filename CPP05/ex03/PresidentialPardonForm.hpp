#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {

	private:
	std::string target;

	public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm& other);

	std::string getTarget() const;
	int        execute(Bureaucrat const & executor) const;
};

#endif