/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:08:27 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:06:07 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
	//constructor
		Cat();
		Cat(Cat &copy);
	//destructor
		~Cat();
	//function
	void makeSound() const;
	
	Cat &operator=(const Cat &right);
	
	private:

};

#endif