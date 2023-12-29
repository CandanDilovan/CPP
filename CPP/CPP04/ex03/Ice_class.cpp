/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:28:28 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 17:47:19 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice_class.hpp"

Ice::Ice(void) : AMateria()
{
	_type = "ice";
}

Ice::Ice(std::string const & type) : AMateria(type){
}

Ice::Ice(Ice const & src)
{
	*this = src;
}

AMateria* Ice::clone(void) const
{
	AMateria* tmp = new Ice;
	return (tmp);
}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Ice::~Ice(void){
}