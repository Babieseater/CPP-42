/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:52:55 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/18 14:40:04 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"
#include <sys/_types/_uintptr_t.h>

int	main()
{
	uintptr_t	ser;
	Data 		*des;
	Data 		*dat = new Data;
	//test values :
	dat->i = 10;
	dat->str = "what?";
	
	std::cout << "input val: " << dat << std::endl;
	std::cout << "input int: " << dat->i << std::endl;
	std::cout << "input str: " << dat->str << std::endl;
	ser = serialize(dat);
	des = deserialize(ser);
	std::cout << "deserialized val: "<< des << std::endl;
	std::cout << "deserialized int: "<< des->i << std::endl;
	std::cout << "deserialized str: "<< des->str << std::endl;

	std::cout << "serialised val: "<< ser << std::endl;

	delete dat;
	return (0);
}