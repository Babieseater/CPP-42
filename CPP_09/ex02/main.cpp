/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:30:00 by smayrand          #+#    #+#             */
/*   Updated: 2023/07/11 15:42:33 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void Solve_Deque(std::deque<int> *data)
{
	std::deque<int> *data2 = new std::deque<int>;
	int mid;

	mid = data->size() / 2;
	while (mid > 0)
	{
		data2->push_back(data->back());
		data->pop_back();
		mid--;
	}
	if(data->size() > 1)
		Solve_Deque(data);
	if(data2->size() > 1)
		Solve_Deque(data2);
    std::deque<int>::iterator data_it = data->end();
    std::deque<int>::iterator data2_it = data2->end();
    data_it--;
    data2_it--;
    while (data2->size() > 0)
    {
        if (*data_it <= *data2_it)
        {
            data->insert(data_it + 1, *data2_it);
            data2->pop_back();
            data_it = data->end() - 1;
            data2_it = data2->end() - 1;
        }
        else if (data_it == data->begin())
        {
            data->insert(data_it, *data2_it);
        	data2->pop_back();
            data_it = data->end() - 1;
            data2_it = data2->end() - 1;
        }
        else
            data_it--;
	}
	delete data2;
}

void Solve_Vector(std::vector<int> *data)
{
	std::vector<int> *data2 = new std::vector<int>;
	int mid;

	mid = data->size() / 2;
	while (mid > 0)
	{
		data2->push_back(data->back());
		data->pop_back();
		mid--;
	}
	if(data->size() > 1)
		Solve_Vector(data);
	if(data2->size() > 1)
		Solve_Vector(data2);
    std::vector<int>::iterator data_it = data->end();
    std::vector<int>::iterator data2_it = data2->end();
    data_it--;
    data2_it--;
    while (data2->size() > 0)
    {
        if (*data_it <= *data2_it)
        {
            data->insert(data_it + 1, *data2_it);
            data2->pop_back();
            data_it = data->end() - 1;
            data2_it = data2->end() - 1;
        }
        else if (data_it == data->begin())
        {
            data->insert(data_it, *data2_it);
        	data2->pop_back();
            data_it = data->end() - 1;
            data2_it = data2->end() - 1;
        }
        else
            data_it--;
	}
	delete data2;
}

int	main(int argc, char **argv)
{
	clock_t V_time;
	clock_t D_time;
	int	i = 1;

	if(argc > 2)
	{
		std::vector<int> *V_data = new std::vector<int>;
		std::deque<int> *D_data = new std::deque<int>;
	
		while(i < argc)
		{
			try
			{
				if(std::stoi(argv[i]) < 0)
					return(std::cout << "Error: " << argv[i] << " is an invalid argument.", 0);
				V_data->push_back(std::stoi(argv[i]));	
				D_data->push_back(std::stoi(argv[i]));
				i++;
			}
			catch(std::exception &exception) 
			{
				return(std::cout << "Exception: "<< argv[i] << " is an invalid argument", delete V_data, delete D_data, 0);
			}
		}
		for(i = 1; i < argc; i++)
		{
				if(i == 1)	
					std::cout << "\033[32m   Unsorted: \033[0m";
				std::cout << argv[i] << " ";
		}
		D_time = clock();
		Solve_Deque(D_data);
		D_time = ((double)clock() - D_time) / CLOCKS_PER_SEC * 1000000.0;
		V_time = clock();
		Solve_Vector(V_data);
		V_time = ((double)clock() - V_time) / CLOCKS_PER_SEC * 1000000.0;
		std::cout << std::endl;
		std::cout << "\033[32m     Sorted: \033[0m";
		for(size_t i = 0; i < D_data->size(); i++)
			std::cout << D_data->at(i) << " ";
		std::cout << std::endl;
		std::cout.setf(std::ios::fixed);
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(5);
		std::cout << "\033[32m Deque took: \033[0m" << D_time * 0.00001 << " us." << std::endl;
		std::cout << "\033[32mVector took: \033[0m" << V_time * 0.00001 << " us." << std::endl;
		delete V_data;
		delete D_data;
	}
	else
		return(std::cout << "Error: Not enough or invalid arguments.", 0);
	return (0);
}