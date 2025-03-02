#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Name"), _grade(150) {
    std::cout << "Default Constructor for Buraucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
    std::cout << "Custom Constructor for Buraucrat called" << std::endl;
    if (this->_grade < 1)
        throw GradeTooHighException();
    else if (this->_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor for Buraucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {
    std::cout << "Copy Constructor for Buraucrat called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
    if (this != &other) {
        std::cout << "Copy Constructor for Buraucrat called" << std::endl;
        this->_grade = other._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}

void Bureaucrat::incrementGrade() {
    if (this->_grade <= 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade() {
    if (this->_grade >= 150)
        throw GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::signForm(AForm &form) {
    std::cout << this->_name << " trying to Sign AForm " << form.getName() << std::endl; 
	form.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const &form) {
    std::cout << this->_name << " is trying to execute " << form.getName() << std::endl;
    try {
        form.execute(*this);
        std::cout << this->_name << " successfully executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->_name << " couldn't execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj){
	out << obj.getName() << " bureaucrat grade " << obj.getGrade() << std::endl;
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Bureaucrate grade is too High.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Bureaucrate grade is too Low.";
}