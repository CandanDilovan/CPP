/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:17:08 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/30 11:31:56 by dcandan          ###   ########.fr       */
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
	delete truc;
}