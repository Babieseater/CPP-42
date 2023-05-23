/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:44:50 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 14:44:57 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"

	ShrubberryCreationForm::ShrubberryCreationForm() : Form("default shrub creation form", 145, 137), _target("default shrub") {
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
		return;
	}
	
	ShrubberryCreationForm::ShrubberryCreationForm(std::string const & target) : Form(target, 145, 137), _target(target) {
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
		return;
	}
	
	ShrubberryCreationForm::~ShrubberryCreationForm() {
		
	}
	
	std::string	ShrubberryCreationForm::getTarget() const
	{
		return (this->_target);
	}

	void	ShrubberryCreationForm::exec(Bureaucrat const & bureaucrat) const
	{
		if (this->getSigned() == 0)
			throw (Form::UnsignedFormException());
		else if (bureaucrat.getGrade() > this->getExec())
			throw (Form::GradeTooLowException());
		
		else
		{
			std::ofstream shrub("Shrub " + bureaucrat.getName());
			
			shrub << "     ccee88oo          " << std::endl;
			shrub << "  C8O8O8Q8PoOb o8oo    " << std::endl;
			shrub << " dOB69QO8PdUOpugoO9bD  " << std::endl;
			shrub << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
			shrub << "   6OuU  /p u gcoUodpP " << std::endl;
			shrub << "      \\\\//  /douUP   " << std::endl;
			shrub << "        \\\\////       " << std::endl;
			shrub << "         |||/\\        " << std::endl;
			shrub << "         |||\\/        " << std::endl;
			shrub << "         |||||         " << std::endl;
			shrub << "  .....\\//||||\\....  " << std::endl;
			shrub.close();
		}
	}

	ShrubberryCreationForm	&ShrubberryCreationForm::operator=(const ShrubberryCreationForm &rhs)
	{
		if (this != &rhs)
		{
			_target = rhs._target;
		}
		return *this;
	}