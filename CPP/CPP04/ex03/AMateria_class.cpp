/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:00:51 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 17:56:15 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria_class.hpp"

AMateria::AMateria(void){
}

AMateria::AMateria(std::string const & type) : _type(type){
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->getType() == "cure")
		std::cout << "* heals "<< target.getName() <<"'s wounds *" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria::~AMateria(void){
}