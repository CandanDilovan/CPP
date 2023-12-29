/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:16:45 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/12 11:51:51 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl_class.hpp"

Harl::Harl(void){
}

Harl::~Harl(void){
}

void Harl::_debug(void)
{
	std::cout << "DEBUG" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "INFO" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "WARNING" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "ERROR" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string	complain[4] = {"Debug", "Info", "Warning", "Error"};
	void		(Harl::*Harl_list[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int 		a;

	a = -1;
	while (++a < 4)
	{
		if (complain[a] == level)
		{
			(this->*Harl_list[a])();
			return ;
		}
	}
}