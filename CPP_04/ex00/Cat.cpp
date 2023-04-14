/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:08:18 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:04:29 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

//constructor
Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

//destructor
Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "A cat sound like : Meow Meow Motherfucker " << std::endl;
}


Cat	&Cat::operator=(const Cat &right)
{
	if (this != &right)
	{
		type = right.type;
	}
	return *this;
}