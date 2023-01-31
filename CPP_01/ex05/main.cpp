/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:25:48 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/31 17:42:19 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		std::string input(argv[1]);
		
		Harl harl;
		harl.complain(input);
	}
	else
	{
		std::cout << "Expected arguments: 'DEBUG', 'INFO', 'WARNING', 'ERROR'." << std::endl;
	}
	return(0);
}