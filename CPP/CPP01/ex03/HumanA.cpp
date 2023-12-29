/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:28:21 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/10 18:35:45 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _Weapon(Weapon)
{
    std::cout << _name << " is born\n"; 
}

HumanA::~HumanA(void)
{
    std::cout << _name << " is dead\n"; 
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << *this->_Weapon.getType() << std::endl;
}