/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:09:21 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/13 15:49:07 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap_class.hpp"
#include "FragTrap_class.hpp"

int main(void)
{
    int i;
    ScavTrap Clap("Jean");
    FragTrap Frag("Pierre");
    std::string phil;

    phil = "Philippe";
    Clap.takeDamage(80);
    Clap.beRepaired(5);
    Clap.attack(phil);
    Clap.takeDamage(8);
    Clap.beRepaired(5);
    Clap.guardGate();
    Clap.takeDamage(40);
    Clap.attack(phil);
    Frag.highFivesGuys();
    Frag.attack(phil);
    Frag.beRepaired(100);
    Frag.takeDamage(1000);
    Frag.attack(phil);
}