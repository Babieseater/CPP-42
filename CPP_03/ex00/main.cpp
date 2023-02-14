/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:07:23 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/13 16:58:22 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("A-55");
	
	std::cout << "========== 1st Turn ==========" << std::endl;
	a.attack("the person behind the screen");
	a.attack("the person behind the screen");
	a.attack("the person behind the screen");
	a.takeDamage(7);
	std::cout << "========== 2nd Turn ==========" << std::endl;
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.takeDamage(7);
	std::cout << "========== 3rd Turn ==========" << std::endl;
	a.beRepaired(2);
	a.beRepaired(2);
	a.beRepaired(2);
	a.takeDamage(7);
	std::cout << "========== 4th Turn ==========" << std::endl;
	a.beRepaired(2);
	a.beRepaired(2);
	a.attack("the person behind the screen");
	a.takeDamage(7);
	std::cout << "========== 5th Turn ==========" << std::endl;
	a.beRepaired(2);
	a.attack("the person behind the screen");
	a.takeDamage(7);
	
	return (0);
}