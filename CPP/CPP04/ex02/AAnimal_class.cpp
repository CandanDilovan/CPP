/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:14:05 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:13:06 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal_class.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
    this->type = src.type;
    std::cout << "AAnimal copy constructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
    std::cout << "AAnimal copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

AAnimal::~AAnimal(void)
{
    std::cout << "Default AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound(void) const
{
    std::cout << "bruit d'Aanimal" << std::endl;
}