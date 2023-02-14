/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:33 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/13 12:55:01 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : val(0) {
//	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
//	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int nbi) : val(nbi << acc) {
//	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float nbf) : val(roundf(nbf * (float)(1 << acc))) {
//	std::cout << "Float Constructor called" << std::endl;
	
}

Fixed::~Fixed(void) {
//	std::cout << "Destructor called" << std::endl;
}	

int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member fuction called" << std::endl;
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

//arithmetic operators
Fixed	Fixed::operator+(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(toFloat() + nbr.toFloat()));
	return (res);
}
Fixed	Fixed::operator-(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(toFloat() - nbr.toFloat()));
	return (res);
}
Fixed	Fixed::operator*(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(toFloat() * nbr.toFloat()));
	return (res);
}
Fixed	Fixed::operator/(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(toFloat() / nbr.toFloat()));
	return (res);	
}

//comparisons operators
Fixed	Fixed::operator>(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(this->val > nbr.getRawBits()));
	return (res);	
}
Fixed	Fixed::operator<(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(this->val < nbr.getRawBits()));
	return (res);	
}
Fixed	Fixed::operator>=(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(this->val >= nbr.getRawBits()));
	return (res);	
}
Fixed	Fixed::operator<=(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(this->val <= nbr.getRawBits()));
	return (res);	
}
Fixed	Fixed::operator==(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(this->val == nbr.getRawBits()));
	return (res);	
}
Fixed	Fixed::operator!=(Fixed const &nbr) const {
	Fixed res;
	res = (Fixed(this->val != nbr.getRawBits()));
	return (res);	
}


//increment operators
Fixed	Fixed::operator++(int) {
	Fixed res(*this);
	operator++();
	return (res);
}
Fixed	Fixed::operator--(int) {
	Fixed res(*this);
	operator--();
	return (res);
}
Fixed	&Fixed::operator++() {
	this->val++;
	return (*this);	
}
Fixed	&Fixed::operator--() {
	this->val--;
	return (*this);	
}

Fixed	&Fixed::operator=(const Fixed &nbr)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &nbr)
		this->val = nbr.getRawBits();
	return *this;
}

//MIN/MAX operators
Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}
Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}
const Fixed&	Fixed::min(Fixed const &a, Fixed const &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}
const Fixed&	Fixed::max(Fixed const &a, Fixed const &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &nbr)
{
	out << nbr.toFloat();
	return out;
}