#include "Array.hpp"

int main() {
	try {
		Array<int> a;
		std::cout << "Array size: " << a.size() << std::endl << std::endl;
		std::cout << "----------------" << std::endl << std::endl;
		
		Array<int> b(5);
		std::cout << "Array size: " << b.size() << std::endl;
		for (unsigned int ctd = 0; ctd < b.size(); ctd++)
			b[ctd] = ctd;
		for (unsigned int ctd = 0; ctd < b.size(); ctd++)
			std::cout << "b[" << ctd << "] = " << b[ctd] << std::endl;
		std::cout << std::endl << "----------------" << std::endl << std::endl;

		Array<int> c(b);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}