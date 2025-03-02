#ifndef AFORM_H
# define AFORM_H

# include "Bureaucrat.hpp"
# include <cstdlib>
# include <fstream>
# include <ctime>

class Bureaucrat;

class   AForm {

    private:
        std::string     _name;
        bool            isSigned;
        const int       gradeToSign;
        const int       gradeToExec;
    
    public:
        AForm();
        AForm(const std::string &name, int signGrade, int execGrade);
        ~AForm();
        AForm(const AForm &copy);
        AForm &operator=(const AForm &other);

        std::string     getName() const;
        bool            isItSigned() const;
        int             getSignGrade() const;
        int             getExecGrade() const;
        void            beSigned(const Bureaucrat &B);
        virtual void	execute(Bureaucrat const & executor) const = 0;

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

        class NotSignedException : public std::exception{
            public:
                NotSignedException();
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif