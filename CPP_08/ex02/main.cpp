/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:22:10 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/15 15:11:56 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(void)
{
	
	std::cout << "Mutant Stack: " << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl; mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5);
	mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	   std::cout << *it << std::endl;
		++it;
	}
	//std::stack<int> s(mstack);  // Note: variable inutile?
	std::cout << std::endl;
	
	
	
	std::cout << "Using List: " << std::endl;
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl; lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3); lstack.push_back(5);
	lstack.push_back(737);
	std::list<int>::iterator it2 = lstack.begin();
	std::list<int>::iterator ite2 = lstack.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
	   std::cout << *it2 << std::endl;
		++it2;
	}
	//std::stack<int> s2(mstack);
	std::cout << std::endl;
	
	return 0;
}
