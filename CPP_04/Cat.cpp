/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:08:18 by smayrand          #+#    #+#             */
/*   Updated: 2023/03/28 13:08:14 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

//constructor
Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
}

//destructor
Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

