/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm_class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:25:52 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 15:24:44 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm_class.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("default"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src)
{
	*this = src;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

PresidentialPardonForm::~PresidentialPardonForm(void){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	int a;

	a = rand() % 1;
	if (getSigned() == 1 && executor.getGrade() <= getEgrade())
	{
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}
