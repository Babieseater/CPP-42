/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:22:10 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/13 20:12:19 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	
// manual numbers
	try
	{
		Span tab(5);
		tab.addNumber(6);
		tab.addNumber(3);
		tab.addNumber(17);
		tab.addNumber(9);
		tab.addNumber(11);
		tab.addNumber(12);

		std::cout << std::endl;
		tab.shortestSpan();
		tab.longestSpan();
		
		std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

// 10 000 numbers  Note: Max 24 000	
	try
	{
		int	nb = 2;
	//	int	nb = 10000;
		Span tab10k(nb);
		
		for(int i = 0; i < nb; i++)
			tab10k.addNumber(i);
		
		std::cout << std::endl;
		tab10k.shortestSpan();
		tab10k.longestSpan();
		
		std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}
