/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:08:27 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/05 15:41:42 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
	//constructor
		Cat();
		Cat(const Cat &copy);
	//destructor
		~Cat();
	//function
	void makeSound() const;
	std::string		getIdea(int i);
	
	Cat &operator=(const Cat &right);
	
	private:
	Brain *_brain;

};

#endif