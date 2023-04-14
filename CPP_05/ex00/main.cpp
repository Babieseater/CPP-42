/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:16 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/11 23:03:13 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[34mBureaucrat:\033[0m" << std::endl;
	
		try
		{
			std::cout << "\033[34mPaul:\033[0m" << std::endl;
			std::cout << "\033[32mConstructor:\033[0m" << std::endl;
			std::cout << "Construct Paul with grade 151" << std::endl;
			Bureaucrat Paul("Paul", 151);
			std::cout << "\033[32mIncrement:\033[0m" << std::endl;
			std::cout << Paul << std::endl;
			Paul.increaseGrade();
			std::cout << Paul << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDecrement x2:\033[0m" << std::endl;
			std::cout << Paul << std::endl;
			Paul.decreaseGrade();
			std::cout << Paul << std::endl;
			Paul.decreaseGrade();
			std::cout << Paul << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDestructor:\033[0m" << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException)
		{
			std::cout << Bureaucrat::GradeTooLowException().Too_Low() << std::endl;
			std::cout << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException)
		{
			std::cout << Bureaucrat::GradeTooHighException().Too_High() << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			std::cout << "\033[34mRick:\033[0m" << std::endl;
			std::cout << "\033[32mConstructor:\033[0m" << std::endl;
			std::cout << "Construct Rick with grade 150" << std::endl;
			Bureaucrat Rick("Rick", 150);
			std::cout << "\033[32mIncrement:\033[0m" << std::endl;
			std::cout << Rick << std::endl;
			Rick.increaseGrade();
			std::cout << Rick << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDecrement x2:\033[0m" << std::endl;
			std::cout << Rick << std::endl;
			Rick.decreaseGrade();
			std::cout << Rick << std::endl;
			Rick.decreaseGrade();
			std::cout << Rick << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDestructor:\033[0m" << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException)
		{
			std::cout << Bureaucrat::GradeTooLowException().Too_Low() << std::endl;
			std::cout << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException)
		{
			std::cout << Bureaucrat::GradeTooHighException().Too_High() << std::endl;
			std::cout << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			std::cout << "\033[34mRoll:\033[0m" << std::endl;
			std::cout << "\033[32mConstructor:\033[0m" << std::endl;
			std::cout << "Construct Roll with grade -1" << std::endl;
			Bureaucrat Roll("Roll", -1);
			std::cout << "\033[32mIncrement:\033[0m" << std::endl;
			std::cout << Roll << std::endl;
			Roll.increaseGrade();
			std::cout << Roll << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDecrement x2:\033[0m" << std::endl;
			std::cout << Roll << std::endl;
			Roll.decreaseGrade();
			std::cout << Roll << std::endl;
			Roll.decreaseGrade();
			std::cout << Roll << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDestructor:\033[0m" << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException)
		{
			std::cout << Bureaucrat::GradeTooLowException().Too_Low() << std::endl;
			std::cout << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException)
		{
			std::cout << Bureaucrat::GradeTooHighException().Too_High() << std::endl;
			std::cout << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			std::cout << "\033[34mBertin:\033[0m" << std::endl;
			std::cout << "\033[32mConstructor:\033[0m" << std::endl;
			std::cout << "Construct Bertin with grade 1" << std::endl;
			Bureaucrat Bertin("Bertin", 1);
			std::cout << "\033[32mIncrement:\033[0m" << std::endl;
			std::cout << Bertin << std::endl;
			Bertin.increaseGrade();
			std::cout << Bertin << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDecrement x2:\033[0m" << std::endl;
			std::cout << Bertin << std::endl;
			Bertin.decreaseGrade();
			std::cout << Bertin << std::endl;
			Bertin.decreaseGrade();
			std::cout << Bertin << std::endl;
			std::cout << std::endl;
			std::cout << "\033[32mDestructor:\033[0m" << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException)
		{
			std::cout << Bureaucrat::GradeTooLowException().Too_Low() << std::endl;
			std::cout << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException)
		{
			std::cout << Bureaucrat::GradeTooHighException().Too_High() << std::endl;
			std::cout << std::endl;
		}
	std::cout << std::endl;
	
	
	return 0;
}