/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:32:21 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/11 14:37:16 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl_class.hpp"

int main(void)
{
    Harl Harl;

    Harl.complain("Debug");
    Harl.complain("Info");
    Harl.complain("Warning");
    Harl.complain("Error");
    return (0);
}