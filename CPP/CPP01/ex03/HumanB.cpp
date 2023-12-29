/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:37:05 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 16:56:41 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << _name << " is born\n";
    this->_Weapon = NULL; 
}

HumanB::~HumanB(void)
{
    std::cout << _name << " is dead\n"; 
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->_Weapon = &Weapon;
}

void HumanB::attack(void)
{
    if (!this->_Weapon)
        std::cout << this->_name << " attacks with their hands" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << *this->_Weapon->getType() << std::endl;
}