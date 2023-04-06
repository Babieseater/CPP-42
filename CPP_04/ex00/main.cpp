/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:07:23 by smayrand          #+#    #+#             */
/*   Updated: 2023/03/29 15:07:12 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << "\033[34mAnimal Part\033[0m" << std::endl;
	std::cout << "\033[32mConstructors:\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	
	std::cout << "\033[32mType test:\033[0m"<< std::endl;
	std::cout << "Meta type:" << " " << meta->getType() << std::endl;
	std::cout << "Cat type:" << " " << cat->getType() << std::endl;
	std::cout << "Dog type:" << " " << dog->getType() << std::endl;
	std::cout << std::endl;
	
	
	std::cout << "\033[32mSound test:\033[0m"<< std::endl;
	dog->makeSound();
	cat->makeSound(); //will output the cat sound! ;
	meta->makeSound();
	
	std::cout << std::endl;
	std::cout << "\033[32mDestructors:\033[0m" << std::endl;
	delete cat;
	delete dog;
	delete meta;
	std::cout << std::endl;

	std::cout << "\033[34mWrong Part:\033[0m" << std::endl;
	std::cout << "\033[32mConstructors:\033[0m" << std::endl;
	const WrongAnimal* Wrong = new WrongAnimal();
	const WrongAnimal* WrongC = new WrongCat();
	std::cout << std::endl;
	
	std::cout << "\033[32mType test:\033[0m"<< std::endl;
	std::cout << "WrongAnimal type:" << " " << Wrong->getType() << std::endl;
	std::cout << "WrongCat type:" << " " << WrongC->getType() << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[32mSound test:\033[0m"<< std::endl;
	std::cout << Wrong->getType() << " : " << std::endl;
	Wrong->makeSound();
	std::cout << WrongC->getType() << " : " << std::endl;
	WrongC->makeSound(); //will output the WrongAnimal sound! 
	std::cout << std::endl;
	
	std::cout << "\033[32mDestructors:\033[0m" << std::endl;
	delete WrongC;
	delete Wrong;
	std::cout << std::endl;
	return (0);
}
