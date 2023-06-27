/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:22:10 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/27 14:20:37 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdio>

// fopen, chmod function

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange	data("data.csv");
		data.start(argv[1]);
	}
	else 
	{
		std::cout << "Error: could not open file." << std::endl;
	}
	
	return 0;
}
