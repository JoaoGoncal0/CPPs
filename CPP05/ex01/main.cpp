#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	try
	{
		Bureaucrat 	Bureaucrat("Bureaucrat", 1);
		Form		MI6("MI6 Contract", 80, 150);
		
		std::cout << Bureaucrat << std::endl;
		std::cout << MI6 << std::endl;
		
		for(int i = 0; i < 79; i++){
			Bureaucrat.decrementGrade();
		}
		
		std::cout << Bureaucrat;
		Bureaucrat.signForm(MI6);

		std::cout << std::endl << MI6 << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}