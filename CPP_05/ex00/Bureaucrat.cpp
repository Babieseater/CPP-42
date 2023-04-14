/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:48 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/11 22:55:58 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Constructor
	Bureaucrat::Bureaucrat() {
		std::cout << "Defaut Bureaucrat Constructor Called" << std::endl;
	}
	
	Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade) {
		if (_grade > 150)
		{
			throw Bureaucrat::GradeTooLowException();
			return ;
		}
		else if (_grade < 1)
		{
			throw Bureaucrat::GradeTooHighException();
			return ;
		}
		std::cout << "Bureaucrat Recruited" << std::endl;
		return ;
	}
	
	Bureaucrat::Bureaucrat(Bureaucrat& copy) {
		std::cout << "Copy Bureaucrat Constructor Called" << std::endl;
		if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
		*this = copy;
		return ;
	}
	
//Destructor
	Bureaucrat::~Bureaucrat() {
		std::cout << "Bureaucrat Fired" << std::endl;
	}
	
//Getters
	std::string	const Bureaucrat::getName() const
	{
		return this->_name;
	}
	
	int		Bureaucrat::getGrade() const
	{
		return this->_grade;
	}


//Increment / Decrement
	void	Bureaucrat::increaseGrade()
	{
		try 
		{
			if (_grade <= 1)
				throw Bureaucrat::GradeTooHighException();
			else
				this->_grade--;
		}
		catch (GradeTooHighException)
		{
			std::cout << GradeTooHighException().Too_High() << std::endl;
		}
	}
	void	Bureaucrat::decreaseGrade()
	{
		try 
		{
			if (_grade >= 150)
				throw Bureaucrat::GradeTooLowException();
			else
				this->_grade++;
		}
		catch (GradeTooLowException)
		{
			std::cout << GradeTooLowException().Too_Low() << std::endl;
		}
	}

//Overload

	Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
	{
		if (_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this != &rhs)
		{
			_grade = rhs._grade;
		}
		return *this;
	}


	std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs)
	{
		out << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade() ;
		return out;
	}
