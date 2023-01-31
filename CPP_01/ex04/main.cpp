/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:58:42 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/31 16:20:06 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string		tmp;
	size_t			index;

	if(argc != 4)
		std::cout << "Require 4 arguments" << std::endl;
	else
	{
		std::ifstream	in(argv[1]);
		std::string		s1(argv[2]);
		std::string		s2(argv[3]);
		std::ofstream	out("resultat");
		while(getline(in, tmp, '\0'))
		{
			while(index != std::string::npos) // = while not at eof
			{
				if(tmp.find(s1))
				{
					index = tmp.find(s1);
					tmp.erase(index, s1.length());
					tmp.insert(index, s2);	
					index = tmp.find(s1, index + s2.length());
				}
			}
			out << tmp;	
		}
	}	
	return (0);
}