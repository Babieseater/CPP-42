/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:01:42 by smayrand          #+#    #+#             */
/*   Updated: 2023/03/28 13:36:28 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//constructor
Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}
//Destructor
Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
}

void	Animal::makeSound()
{
	std::cout << this->type << " : " << "generic animal sound" << std::endl;
}

const std::string	Animal::getType() const
{
	return this->type;
}