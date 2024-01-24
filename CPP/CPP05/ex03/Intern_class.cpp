/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern_class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:25:52 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/17 14:52:03 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern_class.hpp"

Intern::Intern(void){
}

Intern::Intern(const Intern & src)
{
	*this = src;
}

Intern::~Intern(void){
}
const char* Intern::WrongType::what() const throw()
{
	return ("Error: type not handled");
}

AForm* Intern::Presidential(std::string Target)
{
	return (new PresidentialPardonForm(Target));
}

AForm* Intern::Robotomy(std::string Target)
{
	return (new RobotomyRequestForm(Target));
}

AForm* Intern::Shrubbery(std::string Target)
{
	return (new ShurbberyCreationForm(Target));
}

AForm* Intern::MakeForm(std::string Type, std::string Target)
{
	std::string	form[3] = {"presidential request", "shrubbery request", "robotomy request"};
	AForm*		(Intern::*Formlist[3])(std::string Target) = {&Intern::Presidential, &Intern::Shrubbery, &Intern::Robotomy};
	int 		a;

	a = -1;
	while (++a < 4)
	{
		if (form[a] == Type)
		{
			return (this->*Formlist[a])(Target);
		}
	}
	throw WrongType();
}
Intern & Intern::operator=(Intern const & rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}
