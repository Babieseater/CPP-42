/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:07:23 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/05 15:54:41 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << "\033[34mAnimal Part\033[0m" << std::endl;
	std::cout << "\033[32mConstructors:\033[0m" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* meta = new Animal();
	std::cout << std::endl;
	
	std::cout << "\033[32mDestructors:\033[0m" << std::endl;
	delete cat;
	delete dog;
	delete meta;
	std::cout << std::endl;

	std::cout << "\033[34mAnimal Array:\033[0m" << std::endl;
	const Animal* array[6];
	std::cout << "\033[32mArray Constructors:\033[0m" << std::endl;
	for(int i = 0; i < 3; i++)
	{
		const Animal* doggo = new Dog;
		array[i] = doggo;
	}
	for(int i = 3; i < 6; i++)
	{
		const Animal* catto = new Cat;
		array[i] = catto;
	}
	std::cout << std::endl;
	std::cout << "\033[32mArray Destructors:\033[0m" << std::endl;
	for(int i = 0; i < 6; i++)
	{
		delete array[i];
	}
	std::cout << std::endl;
	
	std::cout << "\033[34mCopy Part:\033[0m" << std::endl;
	std::cout << "\033[32mCopy Constructors:\033[0m" << std::endl;
	Cat cat2;
	Cat cat3(cat2);
	std::cout << std::endl;
	
	std::cout << "\033[32mCopy address Tests:\033[0m" << std::endl;
	std::cout << "testCat address: " << &cat2 << std::endl;
	std::cout << "copyCat address: " <<  &cat3 << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[32mBrain address Tests:\033[0m" << std::endl;
	std::cout << "testCat brain[1] address: " << cat2.getIdea(1) << std::endl;
	std::cout << "copyCat brain[1] address: " <<  cat3.getIdea(1) << std::endl;
	std::cout << std::endl;

	std::cout << "\033[32mDestructors for copies:\033[0m" << std::endl;
	return (0);
}
