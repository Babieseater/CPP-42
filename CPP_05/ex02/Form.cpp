/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:29:07 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 14:46:40 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//constructor
	Form::Form() : _name("Default"), _grade(150), _sign(0), _exec(150) {

	}

	Form::Form(std::string const & name, int grade, int exec) : _name(name), _grade(grade), _sign(0), _exec(exec) {
	std::cout << "Form constructor called" << std::endl;
			if (_grade > 150 || _exec > 150)
			{
				throw Form::GradeTooLowException();
			}
			else if (_grade < 1 || _exec < 1)
			{
				throw Form::GradeTooHighException();
			}
			else
				std::cout << name << " Created with grade level " << _grade << " required." << std::endl;
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
		std::cout << _name << " thrown in the shredder." << std::endl;
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

	int		Form::getExec() const
	{
		return this->_exec;
	}

	bool		Form::getSigned() const
	{
		return this->_sign;
	}

//exception
	const char* Form::Exception::what() const throw()
	{
		return (" generic Exception");
	}
	
	const char* Form::GradeTooHighException::what() const throw()
	{
		return (" grade too high");
	}
	
	const char* Form::GradeTooLowException::what() const throw()
	{
		return (" grade too low");
	}

	const char* Form::SignedException::what() const throw()
	{
		return (" form already signed");
	}
	
	const char* Form::UnsignedFormException::what() const throw()
	{
		return (" unsigned form cannot be executed");
	}

//functions	
	void Form::beSigned(Bureaucrat const &bureaucrat)
	{
		if (bureaucrat.getGrade() <= this->getGrade() && _sign == 0)
		{
			_sign = 1;
			std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
			return ;
		}
		else if (_sign != 0)
		{
			throw Form::SignedException();
			return;
		}
		else
		{
			throw Form::GradeTooLowException();
			return;
		}
	}
//overload

	Form	&Form::operator=(const Form &rhs)
	{
		if (this != &rhs)
		{
			_sign = rhs._sign;
		}
		return *this;
	}


	std::ostream	&operator<<(std::ostream &out, const Form &rhs)
	{
		out << rhs.getName() << ", Form grade: " << rhs.getGrade() << ", Form grade: " << rhs.getExec() << ", Form signed :" << rhs.getSigned() ;
		return out;
	}