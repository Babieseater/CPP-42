/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.main.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:52:19 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/27 15:09:56 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie *horde;
	
	horde = zombieHorde(5, "Bertin");
	// équivalent de "free" en C++ les "[]" servent a free un array
	delete[](horde);
	return(0);
}