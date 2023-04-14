/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:29:17 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 13:28:22 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
private:
		std::string const _name;
		bool		_sign;
		int	const		_grade;
		int	const		_exec;
		
public:
//constructor
	Form();
	Form(std::string const & name, int grade);
	Form(Form& copy);
//destructor
	~Form();
	
//getters
	std::string const getName() const;
	int getGrade() const;
	bool getSigned() const;
	
//functions
	void beSigned(class Bureaucrat const &bureaucrat);
	
//overload
	Form &operator=(const Form &rhs);

//exceptions
	class GradeTooHighException : public std::exception
	{
		public:
		const char* Too_High() const throw() {
			return ("Form's grade too high but created nontheless because why not?");
		}
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char* Too_Low() const throw() {
			return ("Form's grade too low but created nontheless because why not?");
		}
	};

};


//overload
std::ostream	&operator<<(std::ostream &out, const Form &rhs);

#endif