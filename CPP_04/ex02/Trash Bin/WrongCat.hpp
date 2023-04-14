/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:08:52 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 14:05:44 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
//constructor
WrongCat();
WrongCat(WrongCat &copy);
//destructor
~WrongCat();

WrongCat &operator=(const WrongCat &right);

private:

};

#endif
