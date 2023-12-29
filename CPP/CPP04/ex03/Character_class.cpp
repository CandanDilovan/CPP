/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:45:32 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/29 15:42:49 by dilovancand      ###   ########.fr       */
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
		if (this->_inventory[a] && a == 3)
		{
			std::cout << "inventory is full" << std::endl;
			return ;
		}
		if (!this->_inventory[a])
		{
			this->_inventory[a] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	int a = 0;

	if (this->_inventory[idx] &&  idx >= 0 && idx < 4)
	{
		while (ground[a] != 0)
			a++;
		ground[a] = this->_inventory[idx];
		this->_inventory[idx] = 0;
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

void Character::deleteground(void)
{
	int a;
	int b;

	a = -1;
	while(++a < 4)
	{
		b = -1;
		while (ground[++b] != 0)
		{

			if (_inventory[a] == ground[b])
				break ;
			else if (ground[b + 1] == 0)
			{
				ground[b + 1] = _inventory[a]; 
				_inventory[a] = 0;
			}
		}
	}
	b = -1;
	while (ground[++b] != 0)
		delete ground[b];
}

Character::~Character(void){
}