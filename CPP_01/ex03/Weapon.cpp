/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:18:27 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/30 14:24:51 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(std::string type) : type(type) {
	
	}
	
	Weapon::~Weapon() {

	}

std::string	&Weapon::getType(void) {
	return(type);
}

void	Weapon::setType(std::string other) {
	type = other;
}