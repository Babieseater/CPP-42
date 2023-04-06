/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:01:42 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/04 14:19:51 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//constructor
Animal::Animal()  {
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Generic Animal";
}

Animal::Animal(Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}
//Destructor
Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "A generic animal sound like : Si j'aurais " << std::endl;
}

const std::string	Animal::getType() const
{
	return this->type;
}

Animal	&Animal::operator=(const Animal &right)
{
	if (this != &right)
	{
		type = right.type;
	}
	return *this;
}