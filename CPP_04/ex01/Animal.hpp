/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:01:58 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/05 15:55:47 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal {
	public:
	//constructor
		Animal();
		Animal(const Animal &copy);
	//destructor
		virtual ~Animal();
	//Functions
		virtual void	makeSound() const;
		const std::string	getType() const;
	//Overload
		Animal	&operator=(const Animal &right);
	protected:
		std::string type;
};


#endif