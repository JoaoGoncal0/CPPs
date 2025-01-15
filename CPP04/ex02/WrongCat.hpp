#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class   WrongCat:  public WrongAnimal {

	private:
		Brain *_brain;
    public:
        WrongCat();
        virtual ~WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &other);

        void		makeSound() const;
		void		setIdea(int index, std::string idea);
		std::string	getIdea(int index);
};

#endif