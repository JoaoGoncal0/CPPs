#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat {

    private:
        const std::string _name;
        int   _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &other);

        std::string getName() const;
        int         getGrade() const ;
        void        incrementGrade();
        void        decrementGrade();
        void        signForm(AForm &form);
        void 		executeForm(AForm const & form);

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException();
                const char *what() const throw ();
        };

        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException();
                const char *what() const throw ();
        };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif