/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:40:01 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/25 14:56:33 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class ARR>
class	Array {
	private:
	//attributes
	unsigned int	_size;
	ARR	*array;
	
	
	public:
	//constructors
	Array() {
		std::cout << "Defaut constructor called" << std::endl;
		array = new ARR[0];
		_size = 0;
	}
	Array(const Array &copy) {
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	}
	Array(unsigned int n) {
		std::cout << "Unsigned constructor called for a tab of size " << n << "! " << std::endl;
			array = new ARR[n];
			_size = n;
	}

	//destructor
	~Array() {
		std::cout << "Destructor called for array of size " << _size << std::endl;
		delete []array;
	}
	
	//funtion
	unsigned int size(void) const
	{
		return (_size);
	}
	
	//operator overload
	Array	&operator=(const Array &right)
	{
		if (this != &right)
		{
			delete []array;
			this->_size = right.size();
			this->array = new ARR[_size];
			for(unsigned int i = 0; i < this->size(); i++)
				this->array[i] = right.array[i];
		}
		return (*this);
	}

	ARR	&operator[](unsigned int i)
	{
		if (i > _size - 1)
			throw std::exception();
		return (array[i]);
	}
	
};


#endif