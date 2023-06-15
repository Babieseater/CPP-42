/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:21:43 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/13 12:42:39 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
int easyfind(T &con, int nb) {
	for(int i = 0; i < con.size(); i++)
	{
		if(con[i] == nb)
		{
			std::cout << "value found at position : " << i << std::endl;
			return(i);
		}
	}
	std::cout << "value not found" << std::endl;
	return (0);
}

#endif
