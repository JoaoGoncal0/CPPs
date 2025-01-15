#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class   Animal {
    
    protected:
        std::string _type;
    
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &other);

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif