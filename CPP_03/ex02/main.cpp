/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:07:23 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/14 14:29:24 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("A-55");
	ScavTrap b("FU-69");
	FragTrap c("CU-N7");
	
//	std::cout << " " << std::endl;
//	std::cout << ">>>>>>> ClapTrap Fight <<<<<<<" << std::endl;
//	std::cout << " " << std::endl;
//	
//	std::cout << "========== 1st Turn ==========" << std::endl;
//	a.attack("the person behind the screen");
//	a.attack("the person behind the screen");
//	a.attack("the person behind the screen");
//	a.takeDamage(7);
//	std::cout << "========== 2nd Turn ==========" << std::endl;
//	a.beRepaired(2);
//	a.beRepaired(2);
//	a.beRepaired(2);
//	a.takeDamage(7);
//	std::cout << "========== 3rd Turn ==========" << std::endl;
//	a.beRepaired(2);
//	a.beRepaired(2);
//	a.beRepaired(2);
//	a.takeDamage(7);
//	std::cout << "========== 4th Turn ==========" << std::endl;
//	a.beRepaired(2);
//	a.beRepaired(2);
//	a.attack("the person behind the screen");
//	a.takeDamage(7);
//	std::cout << "========== 5th Turn ==========" << std::endl;
//	a.beRepaired(2);
//	a.attack("the person behind the screen");
//	a.takeDamage(7);

//	std::cout << " " << std::endl;
//	std::cout << ">>>>>>> ScavTrap Fight <<<<<<<" << std::endl;
//	std::cout << " " << std::endl;
//	
//	std::cout << "========== 1st Turn ==========" << std::endl;
//	b.attack("the person behind the screen");
//	b.attack("the person behind the screen");
//	b.attack("the person behind the screen");
//	b.takeDamage(7);
//	std::cout << "========== 2nd Turn ==========" << std::endl;
//	b.beRepaired(2);
//	b.beRepaired(2);
//	b.beRepaired(2);
//	b.takeDamage(7);
//	std::cout << "========== 3rd Turn ==========" << std::endl;
//	b.beRepaired(2);
//	b.beRepaired(2);
//	b.beRepaired(2);
//	b.takeDamage(7);
//	std::cout << "========== 4th Turn ==========" << std::endl;
//	b.beRepaired(2);
//	b.beRepaired(2);
//	b.attack("the person behind the screen");
//	b.takeDamage(7);
//	std::cout << "========== 5th Turn ==========" << std::endl;
//	b.beRepaired(2);
//	b.beRepaired(2);
//	b.attack("the person behind the screen");
//	b.takeDamage(7);
//	std::cout << "========== 6th Turn ==========" << std::endl;
//	std::cout << "The mini-nuke is ready for use!" << std::endl;
//	b.takeDamage(95);
//	b.beRepaired(2);
//	b.takeDamage(7);
//	b.beRepaired(2);
	
	std::cout << " " << std::endl;
	std::cout << ">>>>>>> FragTrap Fight <<<<<<<" << std::endl;
	std::cout << " " << std::endl;
	
	std::cout << "========== 1st Turn ==========" << std::endl;
	c.attack("the person behind the screen");
	c.attack("the person behind the screen");
	c.attack("the person behind the screen");
	c.takeDamage(7);
	std::cout << "========== 2nd Turn ==========" << std::endl;
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.takeDamage(7);
	std::cout << "========== 3rd Turn ==========" << std::endl;
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.takeDamage(7);
	std::cout << "========== 4th Turn ==========" << std::endl;
	c.beRepaired(2);
	c.beRepaired(2);
	c.attack("the person behind the screen");
	c.takeDamage(7);
	std::cout << "========== 5th Turn ==========" << std::endl;
	c.beRepaired(2);
	c.beRepaired(2);
	c.attack("the person behind the screen");
	c.takeDamage(7);
	std::cout << "========== 6th Turn ==========" << std::endl;
	std::cout << "The mini-nuke is ready for use!" << std::endl;
	c.takeDamage(95);
	c.beRepaired(2);
	c.takeDamage(7);
	c.beRepaired(2);
	
				
	std::cout << " " << std::endl;
	
	return (0);
}