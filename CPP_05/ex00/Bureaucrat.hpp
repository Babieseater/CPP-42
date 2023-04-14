/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:35 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/11 22:22:28 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

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

//copy overload
Bureaucrat	&operator=(const Bureaucrat &right);
	
};

//insertion overload
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &rhs);


#endif