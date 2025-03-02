#include "Bureaucrat.hpp"

int main() {

	try
	{
		Bureaucrat Prince;
		Bureaucrat Baron("Baron", 150);
		Bureaucrat Spy("Spy", 1);
		Bureaucrat Chancellor;

		Prince = Spy;
		std::cout << "\n" << std::endl;

		std::cout << Baron;
		Baron.incrementGrade();
		std::cout << Baron;
		std::cout << "\n" << std::endl;
		
		std::cout << Prince;
		Prince.decrementGrade();
		std::cout << Prince;
		std::cout << "\n" << std::endl;

		std::cout << Spy;
		for(int i = 0; i < 149; i++){
			Spy.decrementGrade();
			std::cout << Spy;
		}

		Chancellor = Spy;

		std::cout << Chancellor;
		for(int i = 0; i < 149; i++){
			Chancellor.incrementGrade();
			std::cout << Chancellor;
		}
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	
}