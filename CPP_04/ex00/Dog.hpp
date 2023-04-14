/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:07:37 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:06:20 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
public:
//constructor
Dog();
Dog(Dog &copy);
//destructor
~Dog();
//function
void	makeSound() const;

Dog &operator=(const Dog &right);

private:

};

#endif