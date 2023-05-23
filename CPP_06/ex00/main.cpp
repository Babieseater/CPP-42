/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:52:26 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/17 14:24:53 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

int	main(int argc, char **argv)
{
	std::string str;
	char		c;
	int 		num;
	float 		flo;
	double 		dou;
	int			i = 0;

// add number after the dot for float and double
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(1);
	if (argc == 2)
	{
		str = argv[1];
		if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
		{
			c = str[0];
			num = c;
			flo = num;
			dou = num;
			std::cout << "char:   " << c << std::endl;
			std::cout << "int:    " << num << std::endl;
			std::cout << "float:  " << flo << "f" << std::endl;
			std::cout << "double: " << dou << std::endl;
			return (0);
		}
		else if (str.length() == 1 && std::isprint(str[0]) && std::isdigit(str[0]))
		{
			num	= std::stoi(str);
			flo = std::stof(str);
			dou = std::stod(str);
			std::cout << "char:   non displayable" << std::endl;
			std::cout << "int:    " << num << std::endl;
			std::cout << "float:  " << flo << "f" << std::endl;
			std::cout << "double: " << dou << std::endl;	
			return (0);
		}
		if ((isdigit(str[0]) && str.length() > 1) || (str[0] == '-' && isdigit(str[1]) && str.length() > 1))
		{
			num	= std::stoi(str);
			flo = std::stof(str);
			dou = std::stod(str);
			if (std::isprint(num))
			{
				c = num;
				std::cout << "char:   " << c << std::endl;
			}
			else if (num < 128)
				std::cout << "char:   " << "non displayable" << std::endl;
			else
				std::cout << "char:   impossible"<< std::endl;
			std::cout << "int:    " << num << std::endl;
			std::cout << "float:  " << flo << "f" << std::endl;
			std::cout << "double: " << dou << std::endl;
			return (0);
		}
		else if (str == "nan" || str == "-inf" || str == "+inf" || str == "-inff" || str == "+inff")
		{
			flo = std::stof(str);
			dou = std::stod(str);
			std::cout << "char:   impossible"<< std::endl;
			std::cout << "int:    impossible"<< std::endl;
			std::cout << "float:  " << flo << "f" << std::endl;
			std::cout << "double: " << dou << std::endl;
			return (0);
		}
		else
		{
			std::cout << "char:   impossible"<< std::endl;
			std::cout << "int:    " << "impossible" << std::endl;
			std::cout << "float:  " << "impossible" << std::endl;
			std::cout << "double: " << "impossible" << std::endl;
		}
	}
	return (0);
}