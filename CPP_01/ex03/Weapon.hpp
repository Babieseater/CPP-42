/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:18:31 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/30 14:27:28 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>

class Weapon {
public:
	Weapon(std::string type);
	~Weapon();

	std::string	&getType(void);
	void	setType(std::string other);
private:
	std::string type;
};

#endif