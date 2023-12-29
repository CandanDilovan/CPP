/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:54:49 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/10 17:19:58 by dilovancand      ###   ########.fr       */
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

	std::string _name;

public : 

	Zombie(void);
	~Zombie(void);
	void announce(void);
	void namesetter(std::string name);

};

Zombie* zombieHorde( int N, std::string name );

#endif