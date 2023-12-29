/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:45:26 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/19 15:07:11 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog_class.hpp"

Dog::Dog(void)
{
    std::cout << "Default Dog constructor called" << std::endl;
    this->Dogbrain = new brain;
    type = "Dog";
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->Dogbrain = new brain(*src.Dogbrain);
    this->type = src.type;
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->Dogbrain = new brain(*rhs.Dogbrain);
        this->type = rhs.type;
    }
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Default Dog destructor called" << std::endl;
    delete (Dogbrain);
}

void Dog::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}