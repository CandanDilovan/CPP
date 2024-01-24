/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer_class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:20:20 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/23 14:25:15 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer_class.hpp"

Serializer::Serializer(void){
}

Serializer::~Serializer(void){
}

Serializer::Serializer(Serializer const & src)
{
	*this = src;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}