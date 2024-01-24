/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:17:08 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/24 14:20:44 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base_class.hpp"
#include "A_class.hpp"
#include "B_class.hpp"
#include "C_class.hpp"

int main(void)
{
	Base *truc;
	Base bidule;
	
	truc = bidule.generate();
	bidule.identify(truc);
}