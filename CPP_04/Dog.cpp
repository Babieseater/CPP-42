/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:07:19 by smayrand          #+#    #+#             */
/*   Updated: 2023/03/21 22:48:15 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

//constructor
Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
}

//destructor
Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}