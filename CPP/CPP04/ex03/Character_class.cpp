/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:45:32 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/29 12:06:28 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria_class.hpp"

AMateria* Character::ground[516];

Character::Character(void)
{
	for (int a = 0; a < 4; a++)
		_inventory[a] = 0;
	for (int a = 0; a < 516; a++)
		ground[a] = 0;
}

Character::Character(std::string name) : _name(name)
{
	for (int a = 0; a < 4; a++)
		_inventory[a] = 0;
	for (int a = 0; a < 516; a++)
		ground[a] = 0;
}

Character::Character(Character const & src)
{
	*this = src;
}

void Character::equip(AMateria* m)
{
	int a;

	a = -1;

	while (++a < 4)
	{
		if (this->_inventory[a] && a == 4)
			std::cout << "inventory is full" << std::endl;
		if (!this->_inventory[a])
		{
			this->_inventory[a] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	int a = -1;

	if (this->_inventory[idx] &&  idx > 0 && idx < 4)
	{
		while (ground[a] != 0)
			a++;
		ground[a] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "Nothing to unequip" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx] && idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
	else if (!this->_inventory[idx])
		std::cout << "nothing equiped" << std::endl;
}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		for (int a = 0; a < 4; a++)
			this->_inventory[a] = rhs._inventory[a];
		this->_name = rhs._name;
	}
	return (*this);
}

const std::string & Character::getName(void) const
{
	return (this->_name);
}

Character::~Character(void)
{
	for (int a = 0; a < 4; a++)
	{
		if (_inventory[a])
			delete _inventory[a];
	}
}