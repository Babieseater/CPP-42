/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:37:24 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/25 15:01:45 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <exception>

int main(void)
{
//	std::string str_tab[6] = {"J'ai ", "besoin ", "de ", "café ", "en ", "sacrament. "};
//    int tab[7] = {1, 2, 3, 5, 75, 99, 150};
	try
	{	
		Array<int> nb(7);
		nb[0] = 42;
		nb[1] = 420;
		nb[2] = 69;
		nb[3] = -1;
		nb[4] = 333;
		nb[5] = 666;
		nb[6] = 999;
		
		Array<std::string> str(4);
		str[0] = "J'ai";
		str[1] = "besoin";
		str[2] = "de";
		str[3] = "café";
		//str[4] = "!";
		
		std::cout << std::endl;
	
		std::cout << "Int array content :" << std::endl;
		for(int i = 0; i < nb.size(); i++)
			std::cout << "nb [" << i << "] -> " << nb[i] << std::endl;
		std::cout << std::endl;
	
		std::cout << "Str array content :" << std::endl;
		for(int i = 0; i < str.size(); i++)
			std::cout << "str [" << i << "] -> " << str[i] << std::endl;
		std::cout << std::endl;
		
		str[3] = "biere";
		std::cout << "Modified str array content :" << std::endl;
		for(int i = 0; i < str.size(); i++)
			std::cout << "str [" << i << "] -> " << str[i] << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "catched an exception, figure it out yourself." << std::endl;
	}
	return (0);
}