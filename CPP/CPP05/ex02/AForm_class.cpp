/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:31:17 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/15 22:28:22 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm_class.hpp"

AForm::AForm(void) : _sgrade(150), _egrade(150){
}

AForm::AForm(std::string name, int sgrade, int egrade) : _name(name), _sgrade(sgrade), _egrade(egrade), _signed(0)
{
}

AForm::AForm(AForm const & src) : _name(src._name), _egrade(src._egrade), _sgrade(src._sgrade), _signed(0)
{
}

AForm::~AForm(void)
{
}

AForm & AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
		this->_signed = 0;
	return (*this);
}

const std::string	AForm::getName(void) const
{
	return (this->_name);
}

const int	AForm::getSgrade(void) const
{
	return (this->_sgrade);
}

const int	AForm::getEgrade(void) const
{
	return (this->_egrade);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Error: AForm grade is too high\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Error: AForm grade is too low\n");
}

const char* AForm::IsNotSigned::what() const throw()
{
	return ("Error : cannot execute form is not signed");
}

void AForm::beSigned(const Bureaucrat& bc)
{
	if (getSigned() == 1)
		throw AlreadySigned();
	if (bc.getGrade() <= this->getSgrade())
		this->_signed = 1;
	else
		throw GradeTooLowException();
}

const char* AForm::AlreadySigned::what() const throw()
{
	return ("Error: AForm is already signed\n");
}

std::ostream & operator<<(std::ostream &str, AForm& f)
{
	str << f.getName() << ", Aform signed grade : " << f.getSgrade()
	<< ", Aform execute grade : " << f.getEgrade() << ", Aform signed : " << f.getSigned() << std::endl;
	return (str);
}