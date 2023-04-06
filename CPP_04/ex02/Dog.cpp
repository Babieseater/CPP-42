/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:07:19 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/05 15:47:37 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

//constructor
Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog deep copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = copy;
}

//destructor
Dog::~Dog(){
	delete	_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "A dog sound like : Woof I guess" << std::endl;
}

Dog &Dog::operator=(const Dog &right)
{
	if (this != &right)
	{
		this->type = right.type;
		for (int i = 0; i < 100; i++)
		{
			_brain[i] = right._brain[i];
		}
	}
	
	return (*this);
}

std::string		Dog::getIdea(int i)
{
	std::cout << &_brain[i];
	return _brain->getIdea(i);
}