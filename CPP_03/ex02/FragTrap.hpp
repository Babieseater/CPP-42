/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:31 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/14 14:16:41 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
# include <iostream>

class FragTrap {
public:
//Constructor
FragTrap(std::string name);
//Destructor
~FragTrap();

//Function
void	attack(const std::string& target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);
void	guardGate(unsigned int amount);
void	highFivesGuys(void);

private:
//attribute
std::string Name;
int Hitpoints;
int Energy;
int AtkDmg;
int Shield;
int EValue;
int HFValue;
};

#endif