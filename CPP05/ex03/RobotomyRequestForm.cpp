#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 25, 5), target(target) {
	std::cout << "RobotomyRequestForm Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm Shredder" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), target(copy.target) {
	std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if(this != &other)
	{
		std::cout << "RobotomyRequestForm other Operator" << std::endl;
		AForm::operator=(other);
		this->target = other.target;
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget() const{
	return this->target;
}

int RobotomyRequestForm::execute(Bureaucrat const &executor) const {

    if (AForm::execute(executor) == 1)
	{
		std::srand(std::time(0));
    	std::cout << "Make Some Drilling Noisessssss" << std::endl;

    	int chance = std::rand() % 2;

    	if (chance)
    	    std::cout << this->target << " just got Robotomized! A new kind has been born!!!" << std::endl;
    	else
    	    std::cout << this->target << " just dodged the Robotomization! Viktor can't handle his might!" << std::endl;
		return 1;
	}
	return -1;
}
