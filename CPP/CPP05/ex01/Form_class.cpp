/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:31:17 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 12:22:22 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form_class.hpp"

Form::Form(void) : _sgrade(150), _egrade(150){
}

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _sgrade(sgrade), _egrade(egrade), _signed(0)
{
	std::cout << "default constructor called" << std::endl;
}

Form::Form(Form const & src) : _name(src._name), _egrade(src._egrade), _sgrade(src._sgrade), _signed(0)
{
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
		this->_signed = 0;
	return (*this);
}

const std::string	Form::getName(void)
{
	return (this->_name);
}

const int	Form::getSgrade(void)
{
	return (this->_sgrade);
}

const int	Form::getEgrade(void)
{
	return (this->_egrade);
}

bool	Form::getSigned(void)
{
	return (this->_signed);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error: Form grade is too high\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error: Form grade is too low\n");
}

const char* Form::AlreadySigned::what() const throw()
{
	return ("Error: Form is already signed\n");
}

void Form::beSigned(const Bureaucrat& bc)
{
	if (getSigned() == 1)
		throw AlreadySigned();
	if (bc.getGrade() <= this->getSgrade())
		this->_signed = 1;
	else
		throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream &str, Form& f)
{
	str << f.getName() << ", form signed grade : " << f.getSgrade()
	<< ", form execute grade : " << f.getEgrade() << ", form signed : " << f.getSigned() << std::endl;
	return (str);
}