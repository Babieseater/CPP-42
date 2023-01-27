/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:52:19 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/27 16:02:52 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie *walker;
	Zombie shrieker("Shrieker");
	
	walker = newZombie("Walker");
	// "." pour call une fonction sur la "stack"
	shrieker.announce();
	// "->" pour call une fonction sur la "heap"
	walker->announce();
	// possibilité de call une fonction en utilisant simplement une string
	randomChump("Runner");
	// équivalent de "free" en C++
	delete(walker);
	return(0);
}