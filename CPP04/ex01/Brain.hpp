/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:45:03 by jomendes          #+#    #+#             */
/*   Updated: 2025/01/14 15:58:14 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class	Brain {

	private:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain(std::string ideas[100]);
		~Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &other);
		void setIdea(int index, std::string idea);
		std::string getIdea(int index);
};

#endif