#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class   WrongAnimal {
    
    protected:
        std::string _type;
    
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &other);

        std::string getType() const;
        virtual void makeSound() const;
};

#endif