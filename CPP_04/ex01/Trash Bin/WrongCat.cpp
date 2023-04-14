/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:08:40 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:05:19 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//constructor
WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}


//destructor
WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}


WrongCat	&WrongCat::operator=(const WrongCat &right)
{
	if (this != &right)
	{
		type = right.type;
	}
	return *this;
}
