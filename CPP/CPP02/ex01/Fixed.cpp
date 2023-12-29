/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:56:32 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/12 14:13:13 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_eightbit = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_bit = 0;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_bit = src._bit;
}

Fixed::Fixed(float const decimale)
{
    std::cout << "Float constructor called" << std::endl;
    this->_bit = decimale * std::pow(2, this->_eightbit) + 0.5;
}

Fixed::Fixed(int const entier)
{
    std::cout << "Int constructor called" << std::endl;
    this->_bit = entier << this->_eightbit;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    this->_bit = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
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


Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_bit = rhs.getRawBits();
    return (*this);
}