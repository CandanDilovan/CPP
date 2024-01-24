/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:24:05 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/17 12:41:40 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat_class.hpp"
#include "Form_class.hpp"

int main(void)
{
	try {
		Bureaucrat	jacques("jacques", 150);
		jacques.upgrade();
		std::cout << jacques;
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
	try{
		Bureaucrat	Jean("jean", 153);
		Form		contract("contract", 10, 10);
		Jean.signForm(contract);
		Jean.signForm(contract);
		std::cout << Jean;
		std::cout << contract;
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
}