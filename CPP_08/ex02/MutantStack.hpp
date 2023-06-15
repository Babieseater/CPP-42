/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:17:12 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/15 15:03:36 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T> {
	private:
	//Junk Overload/copy constructor
	MutantStack(MutantStack &copy);
	MutantStack &operator=(MutantStack const &right);
	
	public:
	//Constructor
	MutantStack() {
	//	std::cout << "Constructor called" << std::endl;	
	};
	//Destructor
	~MutantStack() {
	//	std::cout << "Destructor called" << std::endl;
	};
	
	
	// Using deque to have access to iterator begin() / end()
	typedef typename std::deque<T>::iterator iterator;
	
	//first element
	iterator begin()
	{
		return (this->c.begin());
	}
	
	//past the last element
	iterator end()
	{
		return (this->c.end());
	}

};

#endif