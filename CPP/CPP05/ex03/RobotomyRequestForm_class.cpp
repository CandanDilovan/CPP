/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm_class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:25:52 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 15:24:44 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm_class.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 75, 45), _target("default"){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 75, 45), _target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src)
{
	*this = src;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

RobotomyRequestForm::~RobotomyRequestForm(void){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int a;

	std::srand(time(0));
	a = std::rand();
	a = a % 2;
	if (getSigned() == 1 && executor.getGrade() <= getEgrade())
	{
		if (a == 0)
		{
			std::cout << "BZZZZZZZZ BZZZ BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
			std::cout << getTarget() << " has been robotomized" << std::endl;
		}
		else
		{
			std::cout << "BZZZZZZZZ BZZZ BZZZZZZZZZZZZZZZZZZZ *clink*" << std::endl;
			std::cout << "Robotomized failed on " << getTarget() << std::endl;
		}

	}
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}
