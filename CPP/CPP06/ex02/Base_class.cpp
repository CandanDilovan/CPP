/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:25:22 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/30 11:30:04 by dcandan          ###   ########.fr       */
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

Base::~Base(void){
}

void Base::identify(Base &p)
{
	try{
		A_class A = dynamic_cast<A_class &>(p);
		(void)A;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e){
	}
	try{
		B_class B = dynamic_cast<B_class &>(p);
		(void)B;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e){
	}
	try{
		C_class C = dynamic_cast<C_class &>(p);
		(void)C;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e){
	}
}