/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm_class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:02:07 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 15:29:28 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include "AForm_class.hpp"

class RobotomyRequestForm : public AForm
{

private :

	std::string _target;

public : 

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm & src);
	~RobotomyRequestForm(void);

	virtual void	execute(Bureaucrat const & executor) const;
	void			beSigned(const Bureaucrat& bc);
	std::string		getTarget(void) const;

	RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);
};

#endif