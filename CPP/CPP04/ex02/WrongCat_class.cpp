/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:38:12 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:17:17 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat_class.hpp"

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    this->type = src.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    std::cout << "WrongCat copy assignement operator called" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "Default WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Woem" << std::endl;
}