/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:31 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/14 14:58:09 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
//Constructor
ScavTrap(std::string name);
//Destructor
~ScavTrap();

//Function
void	attack(const std::string& target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);
void	guardGate(unsigned int amount);

private:

};

#endif