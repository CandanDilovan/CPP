/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:24:05 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/15 17:28:05 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat_class.hpp"

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
}