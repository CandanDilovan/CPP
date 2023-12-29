/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:09:21 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/13 14:17:44 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap_class.hpp"

int main(void)
{
    int i;
    ClapTrap Clap("Jean");
    std::string phil;

    phil = "Philippe";
    Clap.takeDamage(5);
    Clap.beRepaired(5);
    Clap.attack(phil);
    Clap.takeDamage(8);
    Clap.beRepaired(5);
    Clap.takeDamage(10);
    Clap.attack(phil);
}