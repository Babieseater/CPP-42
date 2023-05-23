/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:51:25 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/16 13:18:04 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"


class Intern {
	private:
	Intern(Intern &copy);
	//overload
	Intern	&operator=(const Intern &rhs);
	public:
	//constuctor/destructor
	Intern();
	~Intern();
	//functions
	Form *makeForm(std::string name, std::string target);
	protected:
};

#endif