/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:45:26 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:17:21 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog_class.hpp"

Dog::Dog(void)
{
    type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
    this->type = src.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Default Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}