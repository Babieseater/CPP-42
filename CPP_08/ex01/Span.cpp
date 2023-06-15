/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:51:45 by smayrand          #+#    #+#             */
/*   Updated: 2023/06/13 20:04:12 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>

Span::Span() {
	
}

Span::Span(Span &copy) {
	*this = copy;
}

Span::Span(unsigned int N) {
	std::cout << "Constructor called for span size : " << N << std::endl;
	this->size = N;
	if(N > 24000 || N < 0)
		throw Span::UhighM8();
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
	
}

const char* Span::UhighM8::what() const throw()
{
	return ("Number Invalid, U think this is a joke? U think I have time for your bullshit?");
}
const char* Span::Duplicate::what() const throw()
{
	return ("Exception: Duplicate numbers");
}
const char* Span::TooSmall::what() const throw()
{
	return ("Exception: Not enough numbers present.");
}

void Span::addNumber(unsigned int N)
{
	if(span.size() == 0)
			return(std::cout << "1" << ". value : " << N << std::endl, span.push_back(N));
	for(size_t i = 0; i < this->size; i++)
	{
		if(span[i] == N)
		{
			throw Span::Duplicate();	
			return ;
		}
		else if(i == span.size() && span[i] != N)
			return(std::cout << i + 1 << ". value : " << N << std::endl, span.push_back(N));
	}
}

int Span::shortestSpan()
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int res = 0;
	
	if(span.size() == 0 || span.size() == 1)
	{
			throw Span::TooSmall();
			return (0);
	}
	if(this->size > 1)
	{
		res = span[i] - span[i + 1]; 
		while (j < span.size())
		{
			i = 0;
			while(i < span.size())
			{
				if(span[i] - span[j] < res && span[i] - span[j] > 0)
					res = span[i] - span[j];
				i++;
			}
			j++;
		}
	}
	std::cout << "Shortest span : "<< res << std::endl;
	return(res);
}

int Span::longestSpan()
{
	unsigned int res = 0;
	unsigned int max = 0;
	unsigned int min = 4294967295;
	
	if(span.size() == 0 || span.size() == 1)
	{
			throw Span::TooSmall();
			return (0);
	}
	if (span.size() > 1)
	{
		max = span[0];
		for(size_t i = 0; i < span.size(); i++)
			if (span[i] > max)
				max = span[i];
		min = span[0];
		for(size_t j = 0; j < span.size(); j++)
			if (span[j] < min)
				min = span[j];
		res = max - min;
	}
	std::cout << "Longest span : "<< res << std::endl;
	return(res);
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->span = rhs.span;
	}
	return *this;
}
