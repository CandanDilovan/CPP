/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:42:22 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/11 13:04:13 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stream_class.hpp"

Stream::Stream(std::string str, std::string rstr, std::string path) : str(str), rstr(rstr)
{
	std::ifstream ifs(path);
	std::ostringstream stream;
	if (!ifs.is_open())
		std::cout << "File does not exist" << std::endl;
	else
	{
		stream << ifs.rdbuf();
		if (!stream)
			std::cout << "File is empty" << std::endl;
		else
		{
			this->streamstr = stream.str();
			this->grossdiff = rstr.length() - str.length();
		}	
		ifs.close();
	}

}

Stream::~Stream(void){
}
