/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:31 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:01:10 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
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

//overload
FragTrap &operator=(const FragTrap &right);

private:
FragTrap();
FragTrap(FragTrap &copy);
};

#endif