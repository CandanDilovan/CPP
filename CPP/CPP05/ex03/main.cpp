/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:24:05 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/18 14:54:51 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat_class.hpp"
#include "AForm_class.hpp"
#include "PresidentialPardonForm_class.hpp"
#include "ShrubberyCreationForm_class.hpp"
#include "RobotomyRequestForm_class.hpp"
#include "Intern_class.hpp"

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
		Bureaucrat	Jean("jean", 150);
		RobotomyRequestForm pardon("samuel munio");
		Jean.signForm(pardon);
		Jean.executeForm(pardon);
		std::cout << Jean;
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
	try{

		Intern	sam;
		
		AForm *truc = sam.MakeForm("roboto request", "Sam");
		Bureaucrat	papa("papadesam", 1);
		papa.signForm(*truc);
		papa.executeForm(*truc);
		std::cout << papa;
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
}