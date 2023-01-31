/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:19:53 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/30 14:47:27 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name) {

}

HumanB::~HumanB() {
	
}

void	HumanB::attack(void) {
	std::cout << name << " attack with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &choice) {
	weapon = &choice;
}