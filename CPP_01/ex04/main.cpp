/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:58:42 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/31 16:13:36 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string		tmp;
	size_t			index;
	size_t			s1len;
	size_t			s2len;
	
	if(argc != 4)
		std::cout << "Need 4 arguments" << std::endl;
	else
	{
		std::ifstream	in(argv[1]);
		std::string		s1(argv[2]);
		std::string		s2(argv[3]);
		std::ofstream	out("resultat");
		
		s1len = s1.length();
		s2len = s2.length();
		while(getline(in, tmp, '\0'))
		{
			// index != std::string::npos = fin du fichier. équivalent c++ de while(tmp[index] != '\0')	
			while(index != std::string::npos)
			{
				if(tmp.find(s1))
				{
					index = tmp.find(s1);
					tmp.erase(index, s1len);
					tmp.insert(index, s2);	
					index = tmp.find(s1, index + s2len);
				}
			}
			out << tmp;	
		}
	}	
	return (0);
}