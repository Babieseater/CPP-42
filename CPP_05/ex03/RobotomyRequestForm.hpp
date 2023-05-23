/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:46:38 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 12:56:40 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESRTFORM_HPP
#define ROBOTOMYREQUESRTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form {
	private:
	std::string _target;
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm& copy);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
	public:
	RobotomyRequestForm(std::string const & target);
	~RobotomyRequestForm();
	//getter
	std::string	getTarget() const;
	void	exec(Bureaucrat const & bureaucrat) const;
	protected:
};



#endif