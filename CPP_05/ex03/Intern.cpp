/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:51:14 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/16 14:11:28 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"

Intern::Intern() {
	std::cout << "Intern was recruited" << std::endl;
}

Intern::Intern(Intern &copy) {
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern was fired" << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *Problem = NULL;
	if (name == "PresidentialPardonForm")
		Problem = new PresidentialPardonForm(target);
	else if (name == "RobotomyRequestForm")
		Problem = new RobotomyRequestForm(target);
	else if (name == "ShrubberryCreationForm")
		Problem = new ShrubberryCreationForm(target);
	else
		std::cout << "The Intern need some guidance." << std::endl;
	return Problem;
}