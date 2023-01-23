/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:18:08 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/23 15:26:56 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"
//constructor
Phonebook::Phonebook(void) : contact_nb(0) {
	
}
//destructor
Phonebook::~Phonebook(void){

}
//function add contact
	void Phonebook::add_contact(void){
		int	i;
		
		contact_nb++;
		i = contact_nb - 1;
		if(i < 8)
		{
			contact[i].contact_setter();
		}
		else
		{
			contact_nb = 1;
			i = contact_nb - 1;
			contact[i].contact_setter();
		}
	}
//function search contact
	void Phonebook::search_contact(void){
		std::string	buffer;
		int	i;
		contact_max = 8;
		if(contact_nb == 0)
		{
			std::cout << "Phonebook has no contact registered" << std::endl;
			return;
		}
		std::cout << "|===========================================|" << std::endl;
		std::cout << "|         Canada 411 Phonebook 1985         |" << std::endl;
		std::cout << "|===========================================|" << std::endl;
		std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
		std::cout << "|__________|__________|__________|__________|" << std::endl;
		for (int index = 0; index != contact_max; index++) 
		{
			std::cout << "|";
			contact[index].view_contact(index + 1);
		}
		std::cout << "|__________|__________|__________|__________|" << std::endl;
		while (std::isdigit(buffer[0]) == 0)
		{
			std::cout << "Contact index : ";
			std::getline(std::cin, buffer);
		}
		i = std::stoi(buffer);
		if(i <= contact_max && i > 0 && contact_nb >= i )
		{
			contact[i - 1].print_contact();
		}
		else
			std::cout << "Contact not registered." << std::endl;
	}
//function open phonebook
void	Phonebook::phonebook_start(void){
	std::string input;
	
	std::cout << "=============================" << std::endl;
	std::cout << "  Canada 411 Phonebook 1985  " << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "*  ADD  *  SEARCH  *  EXIT  *" << std::endl;
	while(1)
	{
		std::cout << "Choose an option : ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			return ;
		else if (input == "ADD")
			add_contact();
		else if (input == "SEARCH")
			search_contact();
		else
			std::cout << "Bad Input" << std::endl;
			continue ;
	}
}
