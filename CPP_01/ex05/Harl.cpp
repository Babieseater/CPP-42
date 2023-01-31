/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:26:18 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/31 18:49:55 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

//constructor
Harl::Harl() {	
	_actions[0] = &Harl::debug;
	_actions[1] = &Harl::info;
	_actions[2] = &Harl::warning;
	_actions[3] = &Harl::error;
	
	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";
}
//destructor
Harl::~Harl() {
	
}

//public function
void	Harl::complain(std::string level) {
	int i = 0;
	while(i < 4)
	{
		if (_level[i] == level)
		{
			(this->*_actions[i])();
			return;
		}
		i++;
	}
	std::cout << " Try harder dumbass... " << std::endl;
}

//private functions
void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do ! " << std::endl;
}
void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger ! If you did, I wouldnt be asking for more ! " << std::endl;
}
void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month. " << std::endl;
}
void	Harl::error(void) {
	std::cout << "his is unacceptable ! I want to speak to the manager now. " << std::endl;
}