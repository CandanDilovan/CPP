/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:52:53 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 17:46:33 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure_class.hpp"

Cure::Cure(void) : AMateria()
{
	_type = "cure";
}

Cure::Cure(std::string const & type) : AMateria(type){
}

Cure::Cure(Cure const & src)
{
	*this = src;
}

AMateria* Cure::clone(void) const
{
	AMateria* tmp = new Cure();
	return (tmp);
}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Cure::~Cure(void){
}