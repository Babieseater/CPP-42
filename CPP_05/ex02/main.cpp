/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:16 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 14:13:58 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[34mForm:\033[0m" << std::endl;

	std::cout << "\033[32mConstructor:\033[0m" << std::endl;
	
	PresidentialPardonForm	Prez("Prez");
//	PresidentialPardonForm	Prez2("Prez2");
//	PresidentialPardonForm	Prez3("Prez3");
	std::cout << std::endl;
	RobotomyRequestForm	Robo("Robo");
	RobotomyRequestForm	Robo2("Robo2");
	RobotomyRequestForm	Robo3("Robo3");
	std::cout << std::endl;
	ShrubberryCreationForm	Shrub("Shrub");
	ShrubberryCreationForm	Shrub2("Shrub2");
	ShrubberryCreationForm	Shrub3("Shrub3");
	std::cout << std::endl;
	Bureaucrat Jasmin("Le Gars Orange", 140);
	Bureaucrat Cori("Cori", 6);
	Bureaucrat Xavier("Xavier Niel", 1);
	std::cout << std::endl;
	
	std::cout << "\033[32mPresidential Pardon:\033[0m" << std::endl;
	
	std::cout << "\033[34mUnsigned:\033[0m" << std::endl;
	Jasmin.execForm(Prez);
	Cori.execForm(Prez);
	Xavier.execForm(Prez);
	std::cout << std::endl;
	
	std::cout << "\033[34mSigned:\033[0m" << std::endl;
	Jasmin.signForm(Prez);
	Cori.signForm(Prez);
	Xavier.signForm(Prez);
	Jasmin.execForm(Prez);
	Cori.execForm(Prez);
	Xavier.execForm(Prez);
	std::cout << std::endl;
	
	std::cout << "\033[32mRobotomy:\033[0m" << std::endl;
	
	std::cout << "\033[34mUnsigned:\033[0m" << std::endl;
	Jasmin.execForm(Robo);
	Cori.execForm(Robo2);
	Xavier.execForm(Robo3);
	std::cout << std::endl;
	
	std::cout << "\033[34mSigned:\033[0m" << std::endl;
	Jasmin.signForm(Robo);
	Cori.signForm(Robo2);
	Xavier.signForm(Robo3);
	Jasmin.execForm(Robo);
	Cori.execForm(Robo2);
	Xavier.execForm(Robo3);
	std::cout << std::endl;
	
	std::cout << "\033[32mShruberry:\033[0m" << std::endl;
	
	std::cout << "\033[34mUnsigned:\033[0m" << std::endl;
	Jasmin.execForm(Shrub);
	Cori.execForm(Shrub2);
	Xavier.execForm(Shrub3);
	std::cout << std::endl;
	
	std::cout << "\033[34mSigned:\033[0m" << std::endl;
	Jasmin.signForm(Shrub);
	Cori.signForm(Shrub2);
	Xavier.signForm(Shrub3);
	Jasmin.execForm(Shrub);
	Cori.execForm(Shrub2);
	Xavier.execForm(Shrub3);
	std::cout << std::endl;
	
	std::cout << "\033[32mDestructor:\033[0m" << std::endl;

	
	
	return 0;
}