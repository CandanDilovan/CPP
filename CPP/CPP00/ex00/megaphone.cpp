/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:46:17 by dilovancand       #+#    #+#             */
/*   Updated: 2023/11/28 15:54:52 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>

int main(int argc, char **argv)
{
	int a;
	int	b;

	a = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++a < argc)
		{
			b = -1;
			while (argv[a][++b])
				std::cout << (char)std::toupper(argv[a][b]);
		}
		std::cout << std::endl;
	}
	return (0);
}