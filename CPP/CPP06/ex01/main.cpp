/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:25:23 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/23 14:37:36 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer_class.hpp"

int main(void)
{
	Data truc;

	truc.a = 10;
	truc.name = "olivier giroud";

	std::cout << truc.a << ": number in data\n" << truc.name << ": name in data" << std::endl;	
	std::cout << &truc << ": address of data" << std::endl;
	uintptr_t jsp = Serializer::serialize(&truc);
	std::cout << jsp << ": adress" << std::endl;
	Data *transformer = Serializer::deserialize(jsp);
	std::cout << &transformer << ": address of data2" << std::endl;
	std::cout << transformer->a << ": number in data2\n" << transformer->name << ": name in data2" << std::endl;	

	
	
}