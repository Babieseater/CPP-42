/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:15 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:01:35 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//Constructor
ScavTrap::ScavTrap() {
	
}

ScavTrap::ScavTrap(ScavTrap &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap() {
	Name = name;
	Hitpoints = 100;
	Energy = 50;
	AtkDmg = 20;
	std::cout << "ScavTrap " << Name << " has been built!" << std::endl;
	return;
}
//Destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << Name << " has been shredded to pieces!" << std::endl;
	return;
}

//functions
void	ScavTrap::attack(const std::string& target) {
	EValue = 10;
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		std::cout << "ScavTrap " << Name << " teabag the mama of " << target << ", causing " << this->AtkDmg << " points of emotional damage!" << std::endl;
		this->Energy -= EValue;
		std::cout << "ScavTrap " << Name << " now have " << Energy << " energy points remaining." << std::endl;
	}
	else if ((this->Energy == 0 || this->Energy - EValue <= 0)&& Hitpoints >= 1)
		std::cout << "ScavTrap " << Name << " don't have enough energy to attack!" << std::endl;
	else
		std::cout << "ScavTrap " << Name << " is dead!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (Hitpoints >= 1)
	{
		std::cout << "ScavTrap " << Name << " get hit for " << amount << " points of damage!" << std::endl;
		guardGate(amount);
		std::cout << "ScavTrap " << Name << " now have " << Hitpoints << " hitpoints remaining." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " is dead!" << std::endl;
		this->Hitpoints -= amount;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	EValue = 1;
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		std::cout << "ScavTrap " << Name << " repair itself for " << amount << " hitpoint!" << std::endl;
		this->Hitpoints += amount;
		this->Energy -= EValue;
		std::cout << "ScavTrap " << Name << " now have " << Energy << " energy points remaining, and " << Hitpoints << " hitpoints." << std::endl;
	}
	else if ((this->Energy == 0 || this->Energy - EValue <= 0)&& Hitpoints >= 1)
		std::cout << "ScavTrap " << Name << " don't have enough energy to repair itself!" << std::endl;
	else
		std::cout << "ScavTrap " << Name << " is dead!" << std::endl;
}

void	ScavTrap::guardGate(unsigned int amount) {
	int Blocked;
	EValue = 5;
	Shield = 5;
	Blocked = (amount - Shield);
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		this->Hitpoints -= (amount - Shield);
		std::cout << "ScavTrap " << Name << " use his Gatekeeper ability reducing the damage received to " << Blocked << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << Name << " don't have enough energy to use Gatekeep!" << std::endl;
		this->Hitpoints -= amount;
	}
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &right)
{
	if (this != &right)
	{
		Name = right.Name;
	}
	return *this;
}
