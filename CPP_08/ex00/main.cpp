/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:22:10 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/13 12:47:00 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(int argc, char **argv)
{
	int i = 0;
	std::vector<int> con;
	
	con.push_back(5);
	con.push_back(7);
	con.push_back(34);
	con.push_back(2);
	con.push_back(8);
	
	if(argc == 2)
	{
		easyfind(con, std::atoi(argv[1]));
	}
	return(0);
}
