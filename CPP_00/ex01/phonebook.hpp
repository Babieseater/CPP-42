/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:17:55 by smayrand          #+#    #+#             */
/*   Updated: 2023/01/23 14:50:03 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include "contact.hpp"

class Phonebook {
	public:
	//constructor
	Phonebook();
	//destructor
	~Phonebook();
	
	//main function
	void phonebook_start(void);
	
	private:
	//attributes
	Contact 	contact[8];
	int			contact_nb;
	int			contact_max;
	//functions
	void add_contact(void);
	void search_contact(void);
};

#endif