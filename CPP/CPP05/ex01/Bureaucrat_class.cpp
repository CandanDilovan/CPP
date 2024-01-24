/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:26:19 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 12:20:52 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat_class.hpp"

Bureaucrat::Bureaucrat(void){
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

void Bureaucrat::upgrade(void)
{
	if ((this->_grade + 1) > 150)
		throw GradeTooHighException();
	this->_grade += 1;
}

void Bureaucrat::downgrade(void)
{
	if ((this->_grade - 1) < 1)
		throw GradeTooLowException();
	this->_grade -= 1;
}

const std::string Bureaucrat::getName(void)
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Bureaucraft grade is too high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Bureaucraft grade is too low\n");
}

void Bureaucrat::signForm(Form& f)
{
	try {
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << _name << " couldn't sign " << f.getName() << " because " << e.what();
	}
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream &str, Bureaucrat& bc)
{
	str << bc.getName() << ", bureaucrat grade " << bc.getGrade() << std::endl;
	return (str);
}