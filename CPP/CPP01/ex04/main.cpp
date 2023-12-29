/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:39:36 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/11 13:02:48 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stream_class.hpp"

int	ft_replace(char *str1, char *str2, char *filename)
{
	std::size_t found;
	std::size_t a;
	Stream stream = Stream(str1, str2, filename);
	if (stream.streamstr.empty())
		return (0);
	std::ofstream   ofs(std::string(filename) + ".replace\0");

	a = 0;
	std::cout << stream.streamstr.length() << std::endl;
	while (stream.streamstr[a])
	{
		found = stream.streamstr.find(stream.str, a);
		if (found == a)
		{
			ofs << stream.rstr;
			a += std::string(stream.str).size() - 1;
		}
		else
			ofs << stream.streamstr[a];
		a++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, -1);
	ft_replace(argv[1], argv[2], argv[3]);
	return (0);
}