#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class Bureaucrat;

class   Form {

    private:
        std::string _name;
        bool    isSigned;
        const int   gradeToSign;
        const int   gradeToExec;
    
    public:
        Form();
        Form(const std::string &name, int signGrade, int execGrade);
        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &other);

        std::string getName() const;
        bool    isItSigned() const;
        int     getSignGrade() const;
        int     getExecGrade() const;
        void    beSigned(const Bureaucrat &B);

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException();
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException();
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif