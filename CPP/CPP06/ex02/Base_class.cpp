/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:25:22 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/24 15:10:16 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base_class.hpp"
#include "A_class.hpp"
#include "B_class.hpp"
#include "C_class.hpp"

Base *Base::generate(void)
{
	int a;

	std::srand(time(0));
	a = std::rand();
	a = a % 3;
	if (a == 0)
		return (new A_class());	
	else if (a == 1)
		return (new B_class());	
	else
		return (new C_class());	
}

void Base::identify(Base *p)
{
	
	if (dynamic_cast<A_class *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B_class *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C_class *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void Base::identify(Base &p)
{
	try{
		dynamic_cast<A_class &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e){
	}
	try{
		dynamic_cast<B_class &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &e){
	}
	try{
		dynamic_cast<C_class &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &e){
	}
}