/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:46:55 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 13:01:26 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form {
	private:
	std::string _target;
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm& copy);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
	public:
	PresidentialPardonForm(std::string const & target);
	~PresidentialPardonForm();
	//getter
	std::string	getTarget() const;
	void	exec(Bureaucrat const & bureaucrat) const;
	protected:
};



#endif
