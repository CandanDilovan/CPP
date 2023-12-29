/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:14:05 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:13:06 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal_class.hpp"

Animal::Animal(void)
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    this->type = src.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

Animal & Animal::operator=(Animal const & rhs)
{
    std::cout << "Animal copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Default Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "bruit d'animal" << std::endl;
}