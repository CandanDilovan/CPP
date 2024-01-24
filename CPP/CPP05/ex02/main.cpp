/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:24:05 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/17 14:42:26 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat_class.hpp"
#include "AForm_class.hpp"
#include "PresidentialPardonForm_class.hpp"
#include "ShrubberyCreationForm_class.hpp"
#include "RobotomyRequestForm_class.hpp"

int main(void)
{
	try {
		Bureaucrat	jacques("jacques", 150);
		std::cout << jacques;
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
	try{
		Bureaucrat	Jean("jean", 150);
		RobotomyRequestForm pardon("samuel munio");
		Jean.signForm(pardon);
		Jean.executeForm(pardon);
		std::cout << Jean;
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
}