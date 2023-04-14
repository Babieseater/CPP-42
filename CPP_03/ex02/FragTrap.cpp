/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:15 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:02:02 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructor
FragTrap::FragTrap() {
	
}
FragTrap::FragTrap(FragTrap &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name) : ClapTrap() {
	Name = name;
	Hitpoints = 100;
	Energy = 100;
	AtkDmg = 30;
	std::cout << "FragTrap " << Name << " has been powered up!" << std::endl;
	return;
}
//Destructor
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << Name << " has been sent to heaven!" << std::endl;
	return;
}

//functions
void	FragTrap::attack(const std::string& target) {
	EValue = 10;
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		std::cout << "FragTrap " << Name << " laugh at the haircut of " << target << ", causing " << this->AtkDmg << " points of bullying damage!" << std::endl;
		this->Energy -= EValue;
		std::cout << "FragTrap " << Name << " now have " << Energy << " energy points remaining." << std::endl;
	}
	else if ((this->Energy == 0 || this->Energy - EValue <= 0)&& Hitpoints >= 1)
		std::cout << "FragTrap " << Name << " don't have enough energy to attack!" << std::endl;
	else
		std::cout << "FragTrap " << Name << " is dead!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (Hitpoints >= 1)
	{
		std::cout << "FragTrap " << Name << " get hit for " << amount << " points of damage!" << std::endl;
		guardGate(amount);
		std::cout << "FragTrap " << Name << " now have " << Hitpoints << " hitpoints remaining." << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << Name << " is dead!" << std::endl;
		this->Hitpoints -= amount;
	}
}

void	FragTrap::beRepaired(unsigned int amount) {
	EValue = 1;
	HFValue = 10;
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		std::cout << "FragTrap " << Name << " repair itself for " << amount << " hitpoint!" << std::endl;
		this->Hitpoints += amount;
		this->Energy -= EValue;
		if(this->Energy - HFValue >= 0)
			highFivesGuys();
		else
			std::cout << "FragTrap " << Name << " feel too weak to ask for a high fives!" << std::endl;
		std::cout << "FragTrap " << Name << " now have " << Energy << " energy points remaining, and " << Hitpoints << " hitpoints." << std::endl;
	}
	else if ((this->Energy == 0 || this->Energy - EValue <= 0)&& Hitpoints >= 1)
		std::cout << "FragTrap " << Name << " don't have enough energy to repair itself!" << std::endl;
	else
		std::cout << "FragTrap " << Name << " is dead!" << std::endl;
}

void	FragTrap::guardGate(unsigned int amount) {
	int Blocked;
	EValue = 5;
	Shield = 5;
	Blocked = (amount - Shield);
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		this->Hitpoints -= (amount - Shield);
		std::cout << "FragTrap " << Name << " use his Gatekeeper ability reducing the damage received to " << Blocked << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << Name << " don't have enough energy to use Gatekeep!" << std::endl;
		this->Hitpoints -= amount;
	}
}

void	FragTrap::highFivesGuys(void) {
	EValue = 10;
	if ((this->Energy - EValue >= 0) && Hitpoints >= 1)
	{
		std::cout << "FragTrap " << Name << " also ask for a high fives!" << std::endl;
		std::cout << "You can't resist answering the high five healing Fragtrap " << Name << " for an additional " << EValue << " Hitpoints!" << std::endl;
		this->Energy -= EValue;
		this->Hitpoints += EValue;
	}
	else
		std::cout << "FragTrap " << Name << " feel too weak to ask for a high fives!" << std::endl;
}


FragTrap	&FragTrap::operator=(const FragTrap &right)
{
	if (this != &right)
	{
		Name = right.Name;
	}
	return *this;
}