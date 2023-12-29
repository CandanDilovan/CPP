/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:59:29 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/10 14:53:51 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*newZomb;

	newZomb = newZombie("FreshZombie");
	newZomb->announce();
	randomChump("Rob Zombie");
	delete(newZomb);
	return (0);
}