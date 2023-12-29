/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:38:12 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/19 15:07:33 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat_class.hpp"

Cat::Cat(void)
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->catbrain = new brain;
    type = "Cat";
}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->catbrain = new brain(*src.catbrain);
    this->type = src.type;
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->catbrain = new brain(*rhs.catbrain);
        this->type = rhs.type;
    }
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Default Cat destructor called" << std::endl;
    delete (catbrain);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}