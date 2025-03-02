#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5), target(target) {
	std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm Shredder" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), target(copy.target) {
	std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if(this != &other)
	{
		std::cout << "PresidentialPardonForm Copy Operator" << std::endl;
		AForm::operator=(other);
		this->target = other.target;
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget() const{
	return this->target;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const {

    AForm::execute(executor);

    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox (The Hitchhiker's Guide to the Galaxy)" << std::endl;
}