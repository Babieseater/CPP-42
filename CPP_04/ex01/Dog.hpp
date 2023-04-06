/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:07:37 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/05 15:47:53 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
//constructor
	Dog();
	Dog(const Dog &copy);
//destructor
	~Dog();
//function
	void	makeSound() const;
	std::string		getIdea(int i);

	Dog &operator=(const Dog &right);

private:
	Brain *_brain;

};

#endif