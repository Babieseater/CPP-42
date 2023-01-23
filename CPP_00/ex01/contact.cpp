/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:07:05 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/23 15:11:02 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

//constructor
Contact::Contact() {
}
//destructor
Contact::~Contact() {
}

//getters
std::string Contact::getfirstname(int size) const{
	if (first_name.size() > 10)
		return( first_name.substr(0, 9) + ".");
	else
		return (first_name);
}
std::string Contact::getlastname(int size) const{
	if (last_name.size() > 10)
		return( last_name.substr(0, 9) + ".");
	else
		return (last_name);
}
std::string Contact::getnickname(int size) const{
	if (nickname.size() > 10)
		return( nickname.substr(0, 9) + ".");
	else
		return (nickname);
}
std::string Contact::getnumber(int size) const{
	if (number.size() > 10)
		return( number.substr(0, 9) + ".");
	else
		return (number);
}
std::string Contact::getsecret(int size) const{
	if (secret.size() > 10)
		return( secret.substr(0, 9) + ".");
	else
		return (secret);
}
//setter
void	Contact::contact_setter(void){
	std::string buffer;
	
	while (buffer.size() <= 0)
	{
		std::cout << "Enter contact first name :";
		std::getline (std::cin, buffer);
	}
	first_name = buffer;
	buffer = "";
	while (buffer.size() <= 0)
	{
		std::cout << "Enter contact last name :";
		std::getline (std::cin, buffer);
	}
	last_name = buffer;
	buffer = "";
	while (buffer.size() <= 0)
	{
		std::cout << "Enter contact nickname :";
		std::getline (std::cin, buffer);
	}
	nickname = buffer;
	buffer = "";
	while (buffer.size() <= 0)
	{
		std::cout << "Enter contact number :";
		std::getline (std::cin, buffer);
	}
	number = buffer;
	buffer = "";
	while (buffer.size() <= 0)
	{
		std::cout << "Enter contact secret :";
		std::getline (std::cin, buffer);
	}
	secret = buffer;
	buffer = "";
}
//contact functions
	void	Contact::view_contact(int i) const{
		std::cout.width(10);
		std::cout << i << "|";
		std::cout.width(10);
		std::cout << this->getfirstname(10) << "|";
		std::cout.width(10);
		std::cout << this->getlastname(10) << "|";
		std::cout.width(10);
		std::cout << this->getnickname(10) << "|" << std::endl;
	}
	
	void	Contact::print_contact(void) const{
		std::cout << " > First name: " << first_name << std::endl;
		std::cout << "  > Last name: " << last_name << std::endl;
		std::cout << "   > Nickname: " << nickname << std::endl;	
		std::cout << "     > Number: " << number << std::endl;
		std::cout << "     > Secret: " << secret << std::endl;
	}
