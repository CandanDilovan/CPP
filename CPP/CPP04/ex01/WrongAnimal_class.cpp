/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:14:05 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:13:06 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal_class.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    this->type = src.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
    std::cout << "WrongAnimal copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Default WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "bruit d'WrongAnimal" << std::endl;
}