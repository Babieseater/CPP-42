/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:44:50 by smayrand          #+#    #+#             */
/*   Updated: 2023/05/09 13:32:40 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberryCreationForm : public Form {
	private:
	ShrubberryCreationForm();
	ShrubberryCreationForm(ShrubberryCreationForm& copy);
	std::string _target;

	public:
	ShrubberryCreationForm(std::string const & target);
	~ShrubberryCreationForm();
	ShrubberryCreationForm	&operator=(const ShrubberryCreationForm &rhs);
	//getter
	std::string getTarget() const;
	//function
	void	exec(Bureaucrat const & bureaucrat) const;
	protected:
};

#endif
