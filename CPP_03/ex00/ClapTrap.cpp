/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:07:53 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/14 13:28:19 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructor
ClapTrap::ClapTrap(std::string name) {
	Name = name;
	Hitpoints = 10;
	Energy = 10;
	AtkDmg = 0;
	std::cout << "ClapTrap " << Name << " has been constructed!" << std::endl;
}
//Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << Name << " has been destroyed!" << std::endl;

}

//functions
void	ClapTrap::attack(const std::string& target) {
	EValue = 1;
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << this->AtkDmg << " points of damage!" << std::endl;
		this->Energy -= 1;
		std::cout << "ClapTrap " << Name << " now have " << Energy << " energy points remaining." << std::endl;
	}
	else if (this->Energy <= 0 && Hitpoints >= 1)
		std::cout << "ClapTrap " << Name << " don't have enough energy to attack!" << std::endl;
	else
		std::cout << "ClapTrap " << Name << " is dead!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (Hitpoints >= 1)
	{
		std::cout << "ClapTrap " << Name << " get hit for " << amount << " points of damage!" << std::endl;
		this->Hitpoints -= amount;
		std::cout << "ClapTrap " << Name << " now have " << Hitpoints << " hitpoints remaining." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " is dead!" << std::endl;
		this->Hitpoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	EValue = 1;
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		std::cout << "ClapTrap " << Name << " repair itself for " << amount << " hitpoint!" << std::endl;
		this->Hitpoints += amount;
		this->Energy -= 1;
		std::cout << "ClapTrap " << Name << " now have " << Energy << " energy points remaining, and " << Hitpoints << " hitpoints." << std::endl;
	}
	else if (this->Energy <= 0 && Hitpoints >= 1)
		std::cout << "ClapTrap " << Name << " don't have enough energy to repair itself!" << std::endl;
	else
		std::cout << "ClapTrap " << Name << " is dead!" << std::endl;
}
