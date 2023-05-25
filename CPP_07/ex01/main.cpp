/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:16:53 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/23 14:34:31 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printer(std::string &str)
{
	std::cout << str;
}

void mult(int &nb)
{
    nb = nb * 10;
}



int main (void) {
    std::string str_tab[6] = {"J'ai ", "besoin ", "de ", "café ", "en ", "sacrament. "};
    int tab[7] = {1, 2, 3, 5, 75, 99, 150};

	std::cout << std::endl;
    iter(str_tab, 6, &printer);
	std::cout << std::endl;

	std::cout << std::endl;
	
    iter(tab, 7, &mult);
    for (int ii = 0 ; ii < 7 ; ii++)
        std::cout << tab[ii] << " ";
	std::cout << std::endl;
	std::cout << std::endl;
  
}
