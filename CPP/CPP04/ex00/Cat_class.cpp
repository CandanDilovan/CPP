/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:38:12 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:17:17 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat_class.hpp"

Cat::Cat(void)
{
    type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
    this->type = src.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Default Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}