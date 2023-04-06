/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:13:58 by smayrand          #+#    #+#             */
/*   Updated: 2023/04/04 15:59:37 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain {
	public:
	//constructor
	Brain();
	Brain(Brain &copy);
	//destructor
	~Brain();
	//function
	void generateIdea(std::string idea);
	
	//getter
	std::string getIdea(int i);
	//setter
	void setIdea(std::string idea, int i);
	
	//overload
	Brain &operator=(const Brain &right);
	
	private:
	//attributes
	std::string _ideas[100];
	protected:
};

#endif