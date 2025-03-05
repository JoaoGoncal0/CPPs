/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 17:14:35 by jomendes          #+#    #+#             */
/*   Updated: 2025/03/04 11:32:45 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
	const int numAnimals = 6;
	Animal *animals[numAnimals];

	for (int i = 0; i < numAnimals; ++i) {
		if (i < numAnimals / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}	
	for (int i = 0; i < numAnimals; ++i) {
		std::cout << "Type: " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	
	for (int i = 0; i < numAnimals; ++i) {
		delete animals[i];
	}
	
	std::cout << "\n";

	Dog* dog = new Dog();
    
    dog->setIdea(0, "Eat, Play, Sleep, Repeat! \n");
    std::cout << dog->getIdea(0);
	
    std::cout << dog->getIdea(1) << std::endl;

    Dog* dogCopy = new Dog(*dog);
    std::cout << "Refreshing memory..." << std::endl;

    dogCopy->setIdea(0, "RUN RUN RUN");

    std::cout << dogCopy->getIdea(0) << std::endl;
	std::cout << dog->getIdea(0) << std::endl;
	std::cout << dogCopy->getIdea(1) << std::endl;

    delete dogCopy;
    delete dog;

	std::cout << "\n";

    Cat* cat = new Cat();
    cat->setIdea(0, "Climb trees and nap!");
    std::cout << cat->getIdea(0) << std::endl;
	std::cout << cat->getIdea(1) << std::endl;

    WrongCat* wrongCat = new WrongCat();
    wrongCat->setIdea(0, "Scratch everything!");
    std::cout << wrongCat->getIdea(0) << std::endl;
	std::cout << wrongCat->getIdea(1) << std::endl;

    delete cat;
    delete wrongCat;
	
	return (0);
}