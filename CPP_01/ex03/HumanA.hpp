/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:19:13 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/30 14:30:07 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_H
#define HUMANA_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &type);
	~HumanA();

	void	attack(void);
private:
	Weapon &weapon;
	std::string name;
};

#endif