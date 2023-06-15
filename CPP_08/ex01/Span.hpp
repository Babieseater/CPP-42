/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:51:52 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/13 20:09:11 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
//junk
	Span();
	Span(Span &copy);
	Span	&operator=(const Span &right);

//attributes	
	std::vector<int> span;
	unsigned int size;

public:
//constructor
	Span(unsigned int N);
	
//destructor
	~Span();
	
//exceptions
	class Duplicate : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};	
	class TooSmall : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};	
	class UhighM8 : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
		
//functions;
	void printSpan(unsigned int i);
	void addNumber(unsigned int N);
	int shortestSpan();
	int longestSpan();

protected:
	
};

	

#endif