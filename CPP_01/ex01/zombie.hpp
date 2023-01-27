/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:50:53 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/27 13:04:55 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie {
private:
	//création de la variable name
	std::string name;
public:
	//constructor : requiert une string comme variable
	Zombie();
	//destructor
	~Zombie();
	
	void announce(void);
	void naming(std::string data); 
};
	//fonction "heap"
	Zombie* newZombie(std::string name);
	//fonction Horde
	Zombie* zombieHorde(int N, std::string name);
	//fonction pour nommer les zombies

#endif