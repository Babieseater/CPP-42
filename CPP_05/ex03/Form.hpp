/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:29:17 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/16 14:28:35 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class	Bureaucrat;

#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Form {
private:
	Form(Form& copy);
	//attribute
		std::string const _name;
		bool		_sign;
		int	const		_grade;
		int	const		_exec;
		
public:
//constructor
	Form();
	Form(std::string const & name, int grade, int exec);
//destructor
	virtual ~Form();
	
//getters
	std::string const getName() const;
	int getGrade() const;
	int getExec() const;
	bool getSigned() const;
	
//functions
	virtual void beSigned(class Bureaucrat const &bureaucrat);
	virtual void exec(Bureaucrat const & bureaucrat) const = 0;
	
//overload
	Form &operator=(const Form &rhs);

//exceptions
	class Exception : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	class GradeTooHighException : public Form::Exception
	{
		public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public Form::Exception
	{
		public:
		virtual const char* what() const throw();
	};
	class SignedException : public Form::Exception
	{
		public:
		virtual const char* what() const throw();
	};
	class UnsignedFormException : public Form::Exception
	{
		public:
		virtual const char* what() const throw();
	};

};


//overload
std::ostream	&operator<<(std::ostream &out, const Form &rhs);

#endif