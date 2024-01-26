/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:47:57 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/25 15:53:23 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter_class.hpp"

int main(void)
{
	std::string truc[5] = {"bonjour", "ça va ?", "trkl tu connais", "oui", "truc"};
	//int 		machin[5] = {1, 2, 3, 5, 6};

	::iter(truc, 5, fonction);
	for (int a = 0; a < 5; a++)
		std::cout << truc[a] << std::endl;
	 
}