/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:29:07 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 13:34:15 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//constructor
	Form::Form() : _name("Default"), _grade(150), _sign(0), _exec(0) {

	}
	
	Form::Form(std::string const & name, int grade) : _name(name), _grade(grade), _sign(0), _exec(0) {
	std::cout << "Form constructor called" << std::endl;
		try
		{
			if (_grade > 150)
			{
				throw Form::GradeTooLowException();
				return ;
			}
			else if (_grade < 1)
			{
				throw Form::GradeTooHighException();
				return ;
			}
			std::cout << "Form Created with grade level " << _grade << " required." << std::endl;
		}
		catch (Form::GradeTooLowException)
		{
			std::cout << Form::GradeTooLowException().Too_Low() << std::endl;
			std::cout << std::endl;
		}
		catch (Form::GradeTooHighException)
		{
			std::cout << Form::GradeTooHighException().Too_High() << std::endl;
			std::cout << std::endl;
		}
		
	}
	
	Form::Form(Form& copy) : _name("Default"), _grade(150), _sign(0), _exec(0) {
				std::cout << "Copy Form Constructor Called" << std::endl;
		if (_grade > 150)
			throw Form::GradeTooLowException();
		else if (_grade < 1)
			throw Form::GradeTooHighException();
		else
		*this = copy;
		return ;
	}
//destructor
	Form::~Form() {
		std::cout << "Form thrown in the shredder." << std::endl;
	}
	
//getters
	std::string	const Form::getName() const
	{
		return this->_name;
	}
	
	int		Form::getGrade() const
	{
		return this->_grade;
	}
	
	bool		Form::getSigned() const
	{
		return this->_sign;
	}
	

//functions	
	void Form::beSigned(Bureaucrat const &bureaucrat)
	{
		try
		{
			if (bureaucrat.getGrade() <= this->getGrade())
			{
				_sign = 1;
				std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
				return ;
			}
			else
			{
				throw Bureaucrat::GradeTooLowSignException();
				return;
			}
			return ;
		}
		catch (Bureaucrat::GradeTooLowSignException)
		{
			std::cout << Bureaucrat::GradeTooLowSignException().Too_LowS() << std::endl;
		}
		
	}
//overload

	Form	&Form::operator=(const Form &rhs)
	{
		if (_grade > 150)
			throw Form::GradeTooLowException();
		else if (_grade < 1)
			throw Form::GradeTooHighException();
		else if (this != &rhs)
		{
			_sign = rhs._sign;
		}
		return *this;
	}


	std::ostream	&operator<<(std::ostream &out, const Form &rhs)
	{
		out << rhs.getName() << ", Form grade: " << rhs.getGrade() ;
		return out;
	}