/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:46:51 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 14:42:41 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

	RobotomyRequestForm::RobotomyRequestForm() : Form("default pardon creation form", 72, 45), _target("default shrub") {
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
		return;
	}
	
	RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form(target, 72, 45), _target(target) {
		std::cout << "RobotomyRequestForm default constructor called" << std::endl;
		return;
	}
	
	RobotomyRequestForm::~RobotomyRequestForm() {
		
	}
	
	std::string	RobotomyRequestForm::getTarget() const
	{
		return (this->_target);
	}
	
	void	RobotomyRequestForm::exec(Bureaucrat const & bureaucrat) const
	{
		int rdm;
		if (this->getSigned() == 0)
			throw (Form::UnsignedFormException());
		else if (bureaucrat.getGrade() > this->getExec())
			throw (Form::GradeTooLowException());
		else
		{
			rdm = rand() % 2;
			if (rdm == 0)
			{
				std::cout << "BbzzzzzzZt. BbzzzzzZt." << std::endl;
				std::cout << bureaucrat << " has been robotomized! " << std::endl;
				
			}
			else if (rdm == 0)
			{
				std::cout << "Robotomy operation has failed!" << std::endl;
			}
		}
	}
	
	RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
	{
		if (this != &rhs)
		{
			_target = rhs._target;
		}
		return *this;
	}