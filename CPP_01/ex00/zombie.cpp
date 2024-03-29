/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:50:47 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/11 17:23:12 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

//constructor
Zombie::Zombie(std::string data) {
	name = data;
}
//destructor
Zombie::~Zombie() {
	std::cout << name << " has been killed!" << std::endl;
}
//announce
void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//allocation de mémoire necessite un retour vers une adresse "heap"
Zombie* newZombie(std::string name) {
	Zombie* newZombie = new Zombie(name);
	return (newZombie);
}
//fonction "stack"
void randomChump(std::string name) {
	Zombie zombiechump = name;
	zombiechump.announce();
}
