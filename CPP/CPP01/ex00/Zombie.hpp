/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:54:49 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/10 15:00:26 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

# define ZOMBIE_H

#include <iostream>
#include <ctype.h>
#include <string>
#include <iomanip>
#include <ctime>

class Zombie
{

private :

	const std::string _name;

public : 

	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

};

Zombie*	newZombie(std::string name);
void 	randomChump(std::string name);

#endif