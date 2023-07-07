/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:30:00 by smayrand          #+#    #+#             */
/*   Updated: 2023/07/07 11:56:07 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void Solve_Vector(std::vector<int> *data)
{
	
}

void Solve_List(std::list<int> *data)
{

}

int	main(int argc, char **argv)
{
	clock_t V_time;
	clock_t L_time;
	int	i = 1;

	if(argc > 2)
	{
		std::vector<int> *V_data = new std::vector<int>;
		std::list<int> *L_data = new std::list<int>;
	
		while(i < argc)
		{
			try
			{
				if(std::stoi(argv[i]) < 0)
					return(std::cout << "Error: invalid arguments.", 0);
				V_data->push_back(std::stoi(argv[i]));	
				L_data->push_back(std::stoi(argv[i]));
				i++;
				if(i == 1)	
					std::cout << "\033[32mUnsorted: \033[0m";
				std::cout << argv[i] << " ";
			}
			catch(std::exception &exception) 
			{
				return(std::cout << "Exception: "<< argv[i] << " is an invalid argument", delete V_data, delete L_data, 0);
			}
		}
//Solving Part:
		std::cout << std::endl; std::cout << std::endl;

		V_time = clock();
		Solve_Vector(V_data);
		V_time = (double)clock() - V_time;
		
		L_time = clock();
		Solve_List(L_data);
		L_time = (double)clock() - L_time;

		std::cout << "\033[32mSorted: \033[0m";

		std::cout << std::endl; std::cout << std::endl;
			
		

		delete V_data;
		delete L_data;
	}
	else
		return(std::cout << "Error: Not enough or invalid arguments.", 0);
	return (0);
}