/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:16 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/14 13:42:26 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[34mForm:\033[0m" << std::endl;
	
		try
		{
			std::cout << "\033[34mRick:\033[0m" << std::endl;
			std::cout << "\033[32mConstructor:\033[0m" << std::endl;
			
			Bureaucrat Rick("Rick", 100);
			Form T4("T4", 100);
			Form T5("T5", 99);
			Form T6("T6", 99);
			Form T7("T7", 190);
			Rick.signForm(T4);
			Rick.signForm(T5);
			Rick.signForm(T6);
			Rick.signForm(T7);
			std::cout << std::endl;
			
			std::cout << "\033[32mIncrement:\033[0m" << std::endl;
			Rick.increaseGrade();
			Rick.signForm(T5);
			Rick.signForm(T5);
			std::cout << std::endl;
			
			std::cout << "\033[32mDecrement:\033[0m" << std::endl;
			Rick.decreaseGrade();
			Rick.signForm(T5);
			std::cout << std::endl;
			
			std::cout << "\033[32mIncrement:\033[0m" << std::endl;
			Rick.increaseGrade();
			Rick.signForm(T5);
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