/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:19 by smayrand          #+#    #+#             */
/*   Updated: 2023/02/07 14:36:59 by smayrand         ###   ########.fr       */
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
Fixed(const Fixed &copy);
//Int Constructor
Fixed(const int nbi);
//Float Constructor
Fixed(const float nbf);

//Destructor
~Fixed();

//Assignation operator overload
Fixed	&operator=(const Fixed &nbr);


//Functions
int		getRawBits(void) const;
void	setRawBits(int const raw);
float	toFloat(void) const;
int		toInt(void) const;

private:
//atribution des variables
int					val;
static const int	acc = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &nbr);

#endif