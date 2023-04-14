/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:07:38 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 13:53:10 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
# include <iostream>

class ClapTrap {
public:
//Constructor
ClapTrap(std::string name);
//Destructor
~ClapTrap();

//Function
void	attack(const std::string& target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);

//overload
ClapTrap &operator=(const ClapTrap &right);

protected:
//attribute
std::string Name;
int Hitpoints;
int Energy;
int AtkDmg;
int Shield;
int EValue;
int HFValue;

ClapTrap();
ClapTrap(ClapTrap &copy);
};

#endif