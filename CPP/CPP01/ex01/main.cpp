/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:16:01 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/10 15:49:13 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int a;

    a = -1;
    horde = zombieHorde(5, "bleegh");
    while (++a < 5)
    {
      //  std::cout << "zombie :" << a << ' ';
        horde[a].announce();
    }
    delete[] horde;
    return (0);
}