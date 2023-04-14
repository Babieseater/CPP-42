/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:35 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 13:37:32 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat {
private:
//attributes
	std::string const _name;
	int			_grade;
	
public:
//constructors/destructors
	Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat& copy);
	~Bureaucrat();
	
//getters
	std::string	const getName() const;
	int		getGrade() const;
	
//grade manager
	void	increaseGrade();
	void	decreaseGrade();
	
//functions
	void signForm(class Form &form);
	
//exceptions
	class GradeTooHighException : public std::exception
	{
		public:
		const char* Too_High() const throw() {
			return ("Grade cannot go higher");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char* Too_Low() const throw() {
			return ("Grade cannot go lower");
		}
		
	};
	class GradeTooLowSignException : public std::exception
	{
		public:
		const char* Too_LowS() const throw() {
			return ("Grade too low to sign");
		}
		
	};
	class AlreadySignedException : public std::exception
	{
		public:
		const char* Already_Signed() const throw() {
			return ("the form is already signed, that's why he hate working here.");
		}
		
	};

//copy overload
Bureaucrat	&operator=(const Bureaucrat &right);
	
};

//insertion overload
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs);


#endif