#include "Form.hpp"

Form::Form() : _name("Form"), isSigned(false), gradeToSign(150), gradeToExec(150) {
    std::cout << "Default Form Constructor called" << std::endl;
}

Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), isSigned(false), gradeToSign(signGrade), gradeToExec(execGrade) {
    std::cout << "Custom Form Constructor called" << std::endl;
    if (this->gradeToSign < 1 || this->gradeToExec < 1)
        throw GradeTooHighException();
    else if (this->gradeToSign > 150 || this->gradeToExec < 150)
        throw GradeTooLowException();
}

Form::~Form() {
    std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), isSigned(copy.isSigned), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec) {
    std::cout << "Form Copy Constructor called" << std::endl;
}

Form &Form::operator=(const Form &other) {
    if (this != &other) {
        std::cout << "Form Copy Operator" << std::endl;
        this->_name = other._name;
        this->isSigned = other.isSigned;
    }
    return (*this);
}

std::string Form::getName() const {
    return (this->_name);
}

bool Form::isItSigned() const {
    return (this->isSigned);
}

int Form::getSignGrade() const {
    return (this->gradeToSign);
}

int Form::getExecGrade() const {
    return (this->gradeToExec);
}

void Form::beSigned(const Bureaucrat &B) {
    if (this->isSigned) {
        std::cout << "Form is already signed" << std::endl;
        return ;
    }
    if (B.getGrade() > this->gradeToSign) {
        std::cout << B.getName() << " can't sign Form " << this->_name << " because his grade is too low" << std::endl;
        throw GradeTooLowException();
    }
    else {
        std::cout << B.getName() << " Signed " << this->_name << std::endl;
        this->isSigned = true;
    }
}

std::ostream &operator<<(std::ostream &out, const Form &obj){
	out << "Form Name: " << obj.getName() << std::endl
	<< "Form signed: " << (obj.isItSigned() ? "Yes" : "No") << std::endl
	<< "Form Grade To Sign: " << obj.getSignGrade() << std::endl
	<< "Form Grade To Exec: " <<  obj.getExecGrade() << std::endl;
	return out;
}

Form::GradeTooHighException::GradeTooHighException(){
}

Form::GradeTooLowException::GradeTooLowException(){
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Form Grade is too High.";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Form Grade is too Low.";
}