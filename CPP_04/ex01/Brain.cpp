/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:13:48 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/04 16:09:17 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

	//constructor
	Brain::Brain() {
	std::cout << "Im alive" << std::endl;

	}
	
	Brain::Brain(Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
	}
	
	//destructor
	Brain::~Brain() {
	std::cout << "Mind Blown" << std::endl;

	}
	
	std::string		Brain::getIdea(int i)
	{
		return _ideas[i];
	}
	
	void		Brain::setIdea(std::string idea, int i)
	{
		_ideas[i] = idea;
	}
	
	void	Brain::generateIdea(std::string idea)
	{
		for(int i = 0; i < 100; i++)
		{
			this->_ideas[i] = idea;
		}
	}
	
	Brain	&Brain::operator=(const Brain &right)
	{
	for (int i = 0; i < 100; i++ )
	{
		this->_ideas[i] = right._ideas[i];
	}
	return *this;
	}
