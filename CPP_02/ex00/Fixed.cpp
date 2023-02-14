/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:33 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/06 15:22:39 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member fuction called" << std::endl;
	return this->val;
}

void	Fixed::setRawBits(int const raw)
{
	this->val= raw;
}

Fixed	&Fixed::operator=(const Fixed &nbr)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->val = nbr.getRawBits();
	return *this;
}