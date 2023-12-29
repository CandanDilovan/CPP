/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:32:06 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/13 16:11:56 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap_class.hpp"

ScavTrap::ScavTrap(void)
{
	ScavTrap::ClapTrap();
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap has herited ClapTrap" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	this->_AttackDamage = src._AttackDamage;
	this->_EnergyPoints = src._EnergyPoints;
	this->_HitPoints = src._HitPoints;
	this->_Name = src._Name;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void ScavTrap::attack(const std::string& target)
{	
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
    {
        std::cout << "ScvaTrap " << this->_Name << " furiously attacks " << target;
        std::cout << ", causing " << this->_AttackDamage << " points of damage !" << this->_HitPoints << " left" << std::endl;
        this->_EnergyPoints--;
    }
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap is gone" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_Name << " is in Gate keeper mode" << std::endl;
}