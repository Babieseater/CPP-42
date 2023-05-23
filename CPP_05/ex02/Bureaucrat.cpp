/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:48 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 14:43:29 by smayrand         ###   ########.fr       */
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
		}
		else if (_grade < 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
			std::cout << "Bureaucrat " << _name << " recruited with grade: " << _grade << std::endl;
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
		if (getGrade() == 1)
			std::cout << "Bureaucrat Assassinated" << std::endl;
		else
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

//Function
	void Bureaucrat::signForm(Form &form)
	{
				std::cout << "Form grade: " << form.getGrade()<< " || " << this->getName() << " grade: " << this->getGrade() << std::endl;
		try 
		{
			form.beSigned(*this);
		}
		catch (Form::Exception &e)
		{
			std::cout << this->getName() << " couldn't sign form because "<< e.what() << std::endl;
		}	
	}

	void Bureaucrat::execForm(Form const &form)
	{
				std::cout << "Form grade: " << form.getGrade()<< " || " << this->getName() << " grade: " << this->getGrade() << std::endl;
		try 
		{
			form.exec(*this);
			std::cout << this->getName() << " executed form: " << form.getName() << std::endl;
		}
		catch (Form::Exception &e)
		{
			std::cout << this->getName() << " couldn't execute form because "<< e.what() << std::endl;
		}	
	}

//Increment / Decrement
	void	Bureaucrat::increaseGrade()
	{
			if (_grade <= 1)
				throw Bureaucrat::GradeTooHighException();
			else
				this->_grade--;
	}
	void	Bureaucrat::decreaseGrade()
	{
			if (_grade >= 150)
				throw Bureaucrat::GradeTooLowException();
			else
				this->_grade++;
	}

//exception
	const char* Bureaucrat::GradeTooHighException::what() const throw()
	{
		return (" grade too high");
	}

	const char* Bureaucrat::GradeTooLowException::what() const throw()
	{
		return (" grade too low");
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
