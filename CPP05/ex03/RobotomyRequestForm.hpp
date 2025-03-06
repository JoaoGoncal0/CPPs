#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {

	private:
	std::string target;

	public:
	RobotomyRequestForm(const std::string &target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm& other);

	std::string getTarget() const;
	int        execute(Bureaucrat const & executor) const;
};


#endif