/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:18:34 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/19 14:27:55 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain_class.hpp"

brain::brain(void)
{
	std::cout << "Default brain constructor called" << std::endl;
}

brain::brain(brain const & src)
{
	int a;

	a = -1;
	std::cout << "Copy brain constructor called" << std::endl;
	while (++a < 100)
		this->ideas[a] = src.ideas[a];
}

brain::~brain(void)
{
	std::cout << "Default brain destructor called" << std::endl;
}

brain & brain::operator=(brain const & rhs)
{
	int a;

	a = -1;
	if (this != &rhs)
	{
		while (++a < 100)
		 this->ideas[a] = rhs.ideas[a];
	}
	return (*this);
}