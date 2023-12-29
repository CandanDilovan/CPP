/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap_class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:32:06 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/13 15:44:21 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap_class.hpp"

FragTrap::FragTrap(void)
{
	FragTrap::ClapTrap();
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "FragTrap has herited ClapTrap" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src)
{
	this->_AttackDamage = src._AttackDamage;
	this->_EnergyPoints = src._EnergyPoints;
	this->_HitPoints = src._HitPoints;
	this->_Name = src._Name;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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


FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap is gone" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " give a high five to the wind" << std::endl;
}