/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm_class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:02:07 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 15:29:28 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include "AForm_class.hpp"

class PresidentialPardonForm : public AForm
{

private :
	
	std::string	_target;

public : 

	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm & src);
	~PresidentialPardonForm(void);

	virtual void	execute(Bureaucrat const & executor) const;
	void			beSigned(const Bureaucrat& bc);
	std::string		getTarget(void) const;

	PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
};

#endif