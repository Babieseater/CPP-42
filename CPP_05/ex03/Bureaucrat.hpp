/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:35 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 13:03:19 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class	Form;

#include <iostream>
#include <exception>
#include "Form.hpp"
class Bureaucrat {
private:
	Bureaucrat();
	Bureaucrat(Bureaucrat& copy);
//attributes
	std::string const _name;
	int			_grade;
	
public:
//constructors/destructors
	Bureaucrat(std::string const & name, int grade);
	~Bureaucrat();
	
//getters
	std::string	const getName() const;
	int		getGrade() const;
	
//grade manager
	void	increaseGrade();
	void	decreaseGrade();
	
//functions
	void signForm(class Form &form);
	void execForm(class Form const &form);
	
//exceptions
	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw();
	};

//copy overload
Bureaucrat	&operator=(const Bureaucrat &right);
	
};

//insertion overload
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs);


#endif