/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:44:51 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/13 13:01:58 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string find_closest(std::map<std::string, double> &map, std::string str)
{
	std::map<std::string, double>::const_iterator  it = map.begin();
	std::string key = it->first;
	
	while(it != map.end())
	{
		key = it->first;
		if (key > str)
		{
			it--;
			key = it->first;
			return (key);
		}
		it++;
	}
	return (key);
}

void check_input(std::string str)
{
	std::string     str1;
	std::string     str2;
	std::string     str3;

	str1 = str.substr(0, str.find('-'));
	str2 = str.substr(str1.size() + 1, str.find('-'));
	str3 = str.substr(str1.size() + str2.size() + 1, str.find('-'));
	if (std::atoi(str1.c_str()) < 2009)
		throw BadInput();
	if (std::atoi(str2.c_str()) < 0 || std::atoi(str2.c_str()) > 12)
		throw BadInput();
	if (std::atoi(str3.c_str()) < 0 || std::atoi(str3.c_str()) > 31)
		throw BadInput();
}

void check_number(std::string str)
{
	long int truc = std::atof(str.c_str());
	if (truc < 0)
		throw NegativeNumber();
	if (truc > INT_MAX)
		throw IntOverflow();
}

void read_input(const char* filename, std::map<std::string, double> &map)
{
	std::string     str1;
	std::string     str2;
	std::string     str3;
	std::ifstream   ifs(filename);

	(void)map;
	if(!ifs.is_open())
		throw NotOpen();
	std::getline(ifs, str1);
	while (std::getline(ifs, str1))
	{
		try
		{
			if (str1.find("|") == str1.npos)
				throw BadInput();
			str2 = str1.substr(0, str1.find('|'));
			str2.erase(str2.find(" "), str2.size());
			check_input(str2);
			str3 = str1.substr(str1.find('|') + 1, str1.find('\n'));
			check_number(str3);
			if (map.find(str2) == map.end())
			{
				str1 = find_closest(map, str2);
				std::cout <<  str2 << " =>" << str3 << " = " << std::atof(str3.c_str()) * map.find(str1)->second << std::endl;
			}
			else
				std::cout <<  str2 << " =>" << str3 << " = " << std::atof(str3.c_str()) * map.find(str2)->second << std::endl;
		}
		catch (BadInput &e)
		{
			std::cout << "Error: " << e.what() << str1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}

void make_map(std::map<std::string, double> *map)
{
	std::string     str1;
	std::string     str2;
	std::string     str3;
	std::ifstream   ifs("data.csv");
	if(!ifs.is_open())
		throw NotOpen();
	std::getline(ifs, str1);
	while (ifs)
	{
		std::getline(ifs, str1);
		str2 = str1.substr(0, str1.find(','));
		str3 = str1.substr(str1.find(',') + 1, str1.find('\n'));
		map->insert(std::pair<std::string, double>(str2, atof(str3.c_str())));
	}
}