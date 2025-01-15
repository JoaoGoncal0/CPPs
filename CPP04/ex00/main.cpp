/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:41:11 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 15:41:12 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "\n";
    
    std::cout << "Testing Animal:" << std::endl;
    std::cout << "Type: " << animal->getType() << std::endl;
    animal->makeSound();

    std::cout << "\n";

    std::cout << "Testing Dog:" << std::endl;
    std::cout << "Type: " << dog->getType() << std::endl;
    dog->makeSound();

    std::cout << "\n";

    std::cout << "Testing Cat:" << std::endl;
    std::cout << "Type: " << cat->getType() << std::endl;
    cat->makeSound();

    std::cout << "\n";

    const WrongAnimal* wrongcat = new WrongCat();

    std::cout << "Testing WrongAnimal (WrongCat):" << std::endl;
    std::cout << "Type: " << wrongcat->getType() << std::endl;
    wrongcat->makeSound();

    std::cout << "\n";

    delete animal;
    delete dog;
    delete cat;
    delete wrongcat;

    return (0);
}
