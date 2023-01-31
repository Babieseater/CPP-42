/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:19:10 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/30 14:46:37 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &type) : name(name), weapon(type) {

}

HumanA::~HumanA() {
	
}

void	HumanA::attack(void) {
	std::cout << name << " attack with their " << weapon.getType() << std::endl;
}

