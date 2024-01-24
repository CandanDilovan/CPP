/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm_class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:02:07 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/17 14:24:50 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include "AForm_class.hpp"

class ShurbberyCreationForm : public AForm
{

private :

	std::string _target;

public : 

	ShurbberyCreationForm(void);
	ShurbberyCreationForm(std::string target);
	ShurbberyCreationForm(const ShurbberyCreationForm & src);
	~ShurbberyCreationForm(void);

	virtual void	execute(Bureaucrat const & executor) const;
	void			beSigned(const Bureaucrat& bc);
	std::string		getTarget(void) const;

	ShurbberyCreationForm &operator=(ShurbberyCreationForm const & rhs);
};

#endif