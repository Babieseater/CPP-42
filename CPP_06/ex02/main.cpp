/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:43:29 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/23 12:10:22 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

Base::Base(){
	
};
A::A(){
	
};
B::B(){
	
};
C::C(){
	
};

Base::~Base(){
	
};
A::~A(){
	
};
B::~B(){
	
};
C::~C(){
	
};

Base * generate(void)
{
	int nb = 0;
	Base *inst;
	srand(time(0));
	nb = rand() % 3;
	std::cout << nb << std::endl;
	
	if (nb == 1)
		inst = new A();
	else if (nb == 2)
		inst = new B();
	else
		inst = new C();
	return (inst);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is C" << std::endl;
}
void identify(Base& p) // * forbidden
{
	try 
	{
		Base &base = dynamic_cast<A&>(p);
		(void)base;
		std::cout << "This is A" << std::endl;
	}
	catch (std::exception &e)
	{
		try 
		{
			Base &base = dynamic_cast<B&>(p);
			(void)base;
			std::cout << "This is B" << std::endl;
		}
		catch (std::exception &e)
		{
			try 
			{
				Base &base = dynamic_cast<C&>(p);
				(void)base;
				std::cout << "This is C" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "This is Bullshit" << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base *base = generate();
	std::this_thread::sleep_for (std::chrono::seconds(1));
	Base *base1 = generate();
	std::this_thread::sleep_for (std::chrono::seconds(1));
	Base *base2 = generate();
	
	identify(*base);
	identify(base);
	identify(*base1);
	identify(base1);
	identify(*base2);
	identify(base2);
	
	if(base)
		delete (base);
	if(base1)
		delete (base1);
	if(base2)
		delete (base2);
	
	return(0);	
}