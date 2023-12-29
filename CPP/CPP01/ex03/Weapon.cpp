/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:17:18 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 16:33:24 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string wtype) : _type(wtype){
}

Weapon::~Weapon(void){
}

const std::string* Weapon::getType(void)
{
    return (&_type);
}

void Weapon::setType(std::string newType)
{
    _type = newType;
}