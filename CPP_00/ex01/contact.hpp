/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:10:59 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/23 13:47:51 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define	CONTACT_H
#include <iostream>

class Contact {
private:
	//attribute
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	number;
	std::string	secret;
	
	//getters
	std::string getfirstname(int size) const;
	std::string getlastname(int size) const;
	std::string getnickname(int size) const;
	std::string getnumber(int size) const;
	std::string getsecret(int size) const;
	//setters
	//void	setfirstname(void);
	//void	setlastname(void);
	//void	setnickname(void);
	//void	setnumber(void);
	//void	setsecret(void);	
public:
	Contact();
	~Contact();
	//function
	void	contact_setter(void);
	void	create_contact(void);
	void	view_contact(int i) const;
	void	print_contact(void) const;
};

#endif