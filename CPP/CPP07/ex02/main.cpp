/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:57:45 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/26 08:32:33 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array_class.hpp"

int main(void)
{
	Array<std::string>	truc(2);
	
	
	for (int a = 0; a < truc.size(); a++)
	{
		truc._list[a] = "bonjour";
		std::cout << "truc: " << truc[a] << std::endl;
	}
	//std::cout << truc.size() << std::endl;
	try{
		std::cout << truc[100];
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	for (int a = 0; a < truc.size(); a++)
	{
		std::cout << "truc: " << truc[a] << std::endl;
	}

	Array<std::string> machin(truc);
	for (int a = 0; a < machin.size(); a++)
	{
		std::cout << "machin: " << machin[a] << std::endl;
	}
	
}