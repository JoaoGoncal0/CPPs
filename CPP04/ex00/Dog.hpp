/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:41:08 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 15:41:09 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class   Dog:  public Animal {

    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &other);

        void makeSound() const;
};

#endif