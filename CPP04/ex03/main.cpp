#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    Ice *ice = new Ice();
    Ice *ice2 = new Ice(*ice);
    std::cout << ice2->getType() << std::endl;  // Should print "ice"
    
    ICharacter *Elsa = new Character("Elsa");
    AMateria *tmp;
    
    tmp = src->createMateria("ice");
    Elsa->equip(tmp);
    tmp = src->createMateria("cure");
    Elsa->equip(tmp);
    
    tmp = src->createMateria("ice");
    Elsa->equip(tmp);

    ICharacter *Sven = new Character("Sven");
    Elsa->use(0, *Sven);
    Elsa->use(1, *Sven);
    Elsa->use(2, *Sven);

    std::cout << "Unequipping first materia (index 0)" << std::endl;
    Elsa->unequip(0);
    Elsa->use(0, *Sven);

    delete ice2;
    delete ice;
    delete Sven;
    delete Elsa;
    delete src;

    return 0;
}
