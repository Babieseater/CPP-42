/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:19 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/06 15:26:06 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed {
public:
//Constructor
Fixed();
//Copy Constructor
//
Fixed(const Fixed &copy);

//Destructor
~Fixed();

//Assignation operator overload
Fixed	&operator=(const Fixed &nbr);

//Functions
int		getRawBits(void) const;
void	setRawBits(int const raw);

private:
//atribution des variables
int					val;
static const int	acc;
};



#endif