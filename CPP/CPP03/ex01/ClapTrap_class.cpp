/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:54:06 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/13 16:16:32 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap_class.hpp"

ClapTrap::ClapTrap(void)
{
     std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << _Name << " is ready to fight" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_HitPoints = src._HitPoints;
    this->_EnergyPoints =src._EnergyPoints;
    this->_AttackDamage = src._AttackDamage;
    this->_Name = src._Name;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->_Name << " lost miserably" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_HitPoints = rhs._HitPoints;
        this->_EnergyPoints = rhs._EnergyPoints;
        this->_AttackDamage = rhs._AttackDamage;
        this->_Name = rhs._Name;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " attacks " << target;
        std::cout << ", causing " << this->_AttackDamage << " points of damage !" << std::endl;
        this->_EnergyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is attacked";
        std::cout << ", causing " << amount << " points of damage !" << std::endl;
        this->_HitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is getting repaired";
        std::cout << ", regenerating " << amount << " Hitpoints !" << std::endl;
        this->_HitPoints += amount;
        this->_EnergyPoints--;
    }
}