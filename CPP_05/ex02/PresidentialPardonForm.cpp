/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:47:01 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 14:42:26 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

	PresidentialPardonForm::PresidentialPardonForm() : Form("default pardon creation form", 25, 5), _target("default shrub") {
		std::cout << "PresidentialPardonForm default constructor called" << std::endl;
		return;
	}
	
	PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form(target, 25, 5), _target(target) {
		std::cout << "PresidentialPardonForm default constructor called" << std::endl;
		return;
	}
	
	PresidentialPardonForm::~PresidentialPardonForm() {
		
	}
	
	std::string	PresidentialPardonForm::getTarget() const
	{
		return (this->_target);
	}
	
	void	PresidentialPardonForm::exec(Bureaucrat const & bureaucrat) const
	{
		if (this->getSigned() == 0)
			throw (Form::UnsignedFormException());
		else if (bureaucrat.getGrade() > this->getExec())
			throw (Form::GradeTooLowException());
		else
		{
			std::cout << bureaucrat << " has been forgiven by Zaphod Beeblebrox." << std::endl;
		}
	}
	
	PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
	{
		if (this != &rhs)
		{
			_target = rhs._target;
		}
		return *this;
	}