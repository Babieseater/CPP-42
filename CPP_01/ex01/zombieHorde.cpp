/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:35:18 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/27 15:09:48 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void Zombie::naming(std::string data) {
	name = data;
}

Zombie* zombieHorde(int N, std::string name) {
	// Alloue N zombie en une seule allocation
	Zombie* horde = new Zombie[N]; 
	
	for (int i = 0 ; i < N ; i++)
	{
		horde[i].naming(name);
		horde[i].announce();
	}
	return horde;
}