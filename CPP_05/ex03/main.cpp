/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:19:16 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/16 14:24:02 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[34mForm:\033[0m" << std::endl;

	std::cout << "\033[32mConstructor:\033[0m" << std::endl;
	Form *Prez;
	Form *Robo;
	Form *Shrub;
	Intern	Pascal;
	std::cout << std::endl;
	Bureaucrat Jasmin("Le Gars Orange", 140);
	Bureaucrat Cori("Cori", 6);
	Bureaucrat Xavier("Xavier Niel", 1);
	std::cout << std::endl;
	
	std::cout << "\033[32mIntern Makeform:\033[0m" << std::endl;
	Prez = Pascal.makeForm("PresidentialPardonForm", "Prez");
	Robo = Pascal.makeForm("RobotomyRequestForm", "Robo");
	Shrub = Pascal.makeForm("ShrubberryCreationForm", "Shrub");
	Pascal.makeForm("Placeholder", "Placeholder");
	std::cout << std::endl;
	
	std::cout << "\033[32mPresidential Pardon:\033[0m" << std::endl;
	
	std::cout << "\033[34mUnsigned:\033[0m" << std::endl;
	Jasmin.execForm(*Prez);
	Cori.execForm(*Prez);
	Xavier.execForm(*Prez);
	std::cout << std::endl;
	
	std::cout << "\033[34mSigned:\033[0m" << std::endl;
	Jasmin.signForm(*Prez);
	Cori.signForm(*Prez);
	Xavier.signForm(*Prez);
	Jasmin.execForm(*Prez);
	Cori.execForm(*Prez);
	Xavier.execForm(*Prez);
	std::cout << std::endl;
	
	std::cout << "\033[32mRobotomy:\033[0m" << std::endl;
	
	std::cout << "\033[34mUnsigned:\033[0m" << std::endl;
	Jasmin.execForm(*Robo);
	Cori.execForm(*Robo);
	Xavier.execForm(*Robo);
	std::cout << std::endl;
	
	std::cout << "\033[34mSigned:\033[0m" << std::endl;
	Jasmin.signForm(*Robo);
	Cori.signForm(*Robo);
	Xavier.signForm(*Robo);
	Jasmin.execForm(*Robo);
	Cori.execForm(*Robo);
	Xavier.execForm(*Robo);
	std::cout << std::endl;
	
	std::cout << "\033[32mShruberry:\033[0m" << std::endl;
	
	std::cout << "\033[34mUnsigned:\033[0m" << std::endl;
	Jasmin.execForm(*Shrub);
	Cori.execForm(*Shrub);
	Xavier.execForm(*Shrub);
	std::cout << std::endl;
	
	std::cout << "\033[34mSigned:\033[0m" << std::endl;
	Jasmin.signForm(*Shrub);
	Cori.signForm(*Shrub);
	Xavier.signForm(*Shrub);
	Jasmin.execForm(*Shrub);
	Cori.execForm(*Shrub);
	Xavier.execForm(*Shrub);
	std::cout << std::endl;
	delete(Prez);
	delete(Robo);
	delete(Shrub);
	
	std::cout << "\033[32mDestructor:\033[0m" << std::endl;

	
	
	return 0;
}