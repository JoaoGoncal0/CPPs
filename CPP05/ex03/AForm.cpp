#include "AForm.hpp"

AForm::AForm() : _name("AForm"), isSigned(false), gradeToSign(150), gradeToExec(150) {
    std::cout << "Default AForm Constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int signGrade, int execGrade) : _name(name), isSigned(false), gradeToSign(signGrade), gradeToExec(execGrade) {
    std::cout << "Custom AForm Constructor called" << std::endl;
    if (this->gradeToSign < 1 || this->gradeToExec < 1)
        throw GradeTooHighException();
    else if (this->gradeToSign > 150 || this->gradeToExec > 150)
        throw GradeTooLowException();
}

AForm::~AForm() {
    std::cout << "AForm Destructor called" << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy._name), isSigned(copy.isSigned), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec) {
    std::cout << "AForm Copy Constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other) {
    if (this != &other) {
        std::cout << "AForm Copy Assignment Operator" << std::endl;
        this->isSigned = other.isSigned;
    }
    return (*this);
}

std::string AForm::getName() const {
    return (this->_name);
}

bool AForm::isItSigned() const {
    return (this->isSigned);
}

int AForm::getSignGrade() const {
    return (this->gradeToSign);
}

int AForm::getExecGrade() const {
    return (this->gradeToExec);
}

void AForm::beSigned(const Bureaucrat &B) {
    if (this->isSigned) {
        std::cout << "AForm is already signed" << std::endl;
        return ;
    }
    if (B.getGrade() > this->gradeToSign) {
        std::cout << B.getName() << " can't sign AForm " << this->_name << " because his grade is too low" << std::endl;
        throw GradeTooLowException();
    }
    else {
        std::cout << B.getName() << " Signed " << this->_name << std::endl;
        this->isSigned = true;
    }
}

int AForm::execute(Bureaucrat const &executor) const{
	if(this->isSigned && executor.getGrade() < this->gradeToExec)
		return 1;
	else
	{
		if(executor.getGrade() > this->gradeToExec)
			throw GradeTooLowException();
		else if(!this->isSigned)
			throw NotSignedException();
	}
	return 0;
}

std::ostream &operator<<(std::ostream &out, const AForm &obj){
	out << "AForm Name: " << obj.getName() << std::endl
	<< "AForm signed: " << (obj.isItSigned() ? "Yes" : "No") << std::endl
	<< "AForm Grade To Sign: " << obj.getSignGrade() << std::endl
	<< "AForm Grade To Exec: " <<  obj.getExecGrade() << std::endl;
	return out;
}

AForm::GradeTooHighException::GradeTooHighException(){
}

AForm::GradeTooLowException::GradeTooLowException(){
}

AForm::NotSignedException::NotSignedException(){
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "AForm Grade is too High.";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "AForm Grade is too Low.";
}

const char* AForm::NotSignedException::what() const throw(){
	return "AForm was not signed";
}