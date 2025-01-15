#include "Brain.hpp"

Brain::Brain() {
	std::cout  << "Default constructor called (Brain)" << std::endl;
}

Brain::~Brain() {
	std::cout  << "Destructor called (Brain)" << std::endl;
}

Brain::Brain(std::string ideas[100]) {
	std::cout  << "Ideas constructor called (Brain)" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
}

Brain::Brain(const Brain &copy) {
	std::cout  << "Copy constructor called (Brain)" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain	&Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100) {
		_ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) {
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	return "";
}
