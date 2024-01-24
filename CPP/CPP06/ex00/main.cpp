/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:36:46 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/18 15:38:11 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter_class.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		ScalarConverter::convert(argv[1]);
	}
}