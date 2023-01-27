/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:50:53 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/26 12:32:16 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie {
private:
	//création de la variable name
	std::string name;
public:
	//constructor : requiert une string comme variable
	Zombie(std::string data);
	//destructor
	~Zombie();
	
	void announce(void);
};
	//fonction "heap"
	Zombie* newZombie(std::string name);
	//fonction "stack"
	void randomChump(std::string name);

#endif