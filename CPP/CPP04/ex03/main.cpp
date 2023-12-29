/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:17:58 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/29 15:44:02 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Allinone.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp2;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->unequip(1);
	
	tmp = src->createMateria("ice");
	tmp2 = tmp->clone();
	me->equip(tmp);
	me->unequip(2);
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	me->deleteground();
	delete bob;
	delete me;
	delete src;
	return (0);
}