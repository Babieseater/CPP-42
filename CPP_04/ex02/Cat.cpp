/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:08:18 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/05 15:46:22 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

//constructor
Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat deep copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = copy;
	std::cout << "Check !" << std::endl;
}

//destructor
Cat::~Cat(){
	delete _brain;
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
		for (int i = 0; i < 100; i++)
		{
			this->_brain[i] = right._brain[i];
		}
	}
	return *this;
}

std::string		Cat::getIdea(int i)
{
	std::cout << &_brain[i];
	return _brain->getIdea(i);
}