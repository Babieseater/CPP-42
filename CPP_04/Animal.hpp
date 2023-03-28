/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:01:58 by smayrand          #+#    #+#             */
/*   Updated: 2023/03/28 13:30:21 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal {
	public:
	//constructor
		Animal();
	//destructor
		virtual ~Animal();
	//Functions
		virtual void	makeSound();
		const std::string	getType() const;
	
	protected:
		std::string type;
};

#endif