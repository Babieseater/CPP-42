/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:33 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/07 15:21:44 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int nbi) : val(nbi << acc) {
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float nbf) : val(roundf(nbf * (float)(1 << acc))) {
	std::cout << "Float Constructor called" << std::endl;
	
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

float	Fixed::toFloat(void) const
{
	return ((float)this->val / (float)(1 << acc));
}

int		Fixed::toInt(void) const
{
	return (this->val >> acc);
}

Fixed	&Fixed::operator=(const Fixed &nbr)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &nbr)
		this->val = nbr.getRawBits();
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &nbr)
{
	out << nbr.toFloat();
	return out;
}