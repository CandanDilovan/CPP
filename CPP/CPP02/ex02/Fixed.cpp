/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:56:32 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/12 19:30:01 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_eightbit = 8;

Fixed::Fixed(void)
{
	this->_bit = 0;
}

Fixed::Fixed(Fixed const & src)
{
	this->_bit = src._bit;
}

Fixed::Fixed(float const decimale)
{
	this->_bit = decimale * std::pow(2, this->_eightbit) + 0.5;
}

Fixed::Fixed(int const entier)
{
	this->_bit = entier << this->_eightbit;
}

Fixed::~Fixed(void){
}

void Fixed::setRawBits(int const raw)
{
	this->_bit = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_bit);
}

int Fixed::toInt(void) const
{
	return (this->_bit >> 8);
}

float Fixed::toFloat(void) const
{
	float i;

	i = (this->_bit / std::pow(2, this->_eightbit)); 
	return (i);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	return (o << i.toFloat());
}

bool Fixed::operator<(Fixed const & rhs)
{
	return (this->_bit < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs)
{
	return (this->_bit > rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->_bit <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->_bit >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->_bit == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->_bit != rhs.getRawBits());
}


Fixed & Fixed::operator+(Fixed const & rhs)
{
	this->_bit += rhs.getRawBits();
	return(*this);
}

Fixed & Fixed::operator/(Fixed const & rhs)
{
	this->_bit = this->toFloat() / rhs.toFloat() * (1 << this->_eightbit);
	return(*this);
}

Fixed & Fixed::operator-(Fixed const & rhs)
{
	this->_bit -= rhs.getRawBits();
	return(*this);
}

Fixed & Fixed::operator*(Fixed const & rhs)
{
	this->_bit = (this->toFloat() * rhs.toFloat()) * (1 << this->_eightbit);
	return(*this);
}


Fixed & Fixed::operator++()
{
	++this->_bit;
	return (*this);
}

Fixed  Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_bit;
	return (tmp);
}

Fixed & Fixed::operator--()
{
	--this->_bit;
	return(*this);
}

Fixed  Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_bit;
	return (tmp);
}

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return(a);
	return (b);
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return(b);
	return (a);
}

Fixed Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return(a);
	return (b);
}

Fixed Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return(b);
	return (a);
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_bit = rhs.getRawBits();
	return (*this);
}