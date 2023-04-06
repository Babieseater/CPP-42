/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:01:58 by smayrand          #+#    #+#             */
/*   Updated: 2023/03/29 14:42:36 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>

class WrongAnimal {
public:
//constructor
	WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
//destructor
	virtual	~WrongAnimal();
//Functions
	void	makeSound() const;
	const std::string	getType() const;
//Overload
	WrongAnimal &operator=(const WrongAnimal &right);

protected:
	std::string type;

};

#endif