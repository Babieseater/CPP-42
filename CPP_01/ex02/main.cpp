/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:10:54 by smayrand          #+#    #+#             */
/*   Updated: 2023/03/28 15:15:50 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) 
{
	std::string brain = "HI THIS IS BRIAN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << "\033[32m============= ADDRESS =============\033[0m" << std::endl;
	
	std::cout << " STR address : " << &brain << std::endl;
	std::cout << "&PTR address : " << &stringPTR << std::endl;
	std::cout << " PTR address : " << stringPTR << std::endl;
	std::cout << " REF address : " << &stringREF << std::endl;

	std::cout << "\033[32m============== VALUE ==============\033[0m" << std::endl;
	
	std::cout << "STR value : " << brain << std::endl;
	std::cout << "PTR value : " << *stringPTR << std::endl;
	std::cout << "REF value : " << stringREF << std::endl;
	
	std::cout << "\033[32m============== END ==============\033[0m" << std::endl;
}