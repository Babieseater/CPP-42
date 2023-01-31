/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:26:04 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/31 18:21:51 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H
#include <iostream>


class Harl {
public:
	//constructor
	Harl();
	//destructor
	~Harl();
	//public functions
	void	complain(std::string level);	
	
private:
	//private functions
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
	void	(Harl::*_actions[4])(void);
	
	std::string _level[4];

};

#endif