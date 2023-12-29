/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:39:39 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/29 14:49:57 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "AMateria_class.hpp"

class Character : public ICharacter
{

private : 

	AMateria*	_inventory[4];
	std::string _name;

public:

	Character(void);
	Character(std::string name);
	Character(Character const & src);
	~Character(void);
	
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	static AMateria* ground[516];
	
	virtual void deleteground(void);
	Character & operator=(Character const & rhs);
};


#endif