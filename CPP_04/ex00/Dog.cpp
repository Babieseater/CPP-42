/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:07:19 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:04:48 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

//constructor
Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

//destructor
Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "A dog sound like : Woof I guess" << std::endl;
}


Dog	&Dog::operator=(const Dog &right)
{
	if (this != &right)
	{
		type = right.type;
	}
	return *this;
}
