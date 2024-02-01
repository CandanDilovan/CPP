/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:44:51 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/01 15:48:29 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
    while (ifs)
    {
        try
        {
            std::getline(ifs, str1);
            if (str1.find("|") == str1.npos)
                throw BadInput();
            str2 = str1.substr(0, str1.find('|'));
            str2.erase(str2.find(" "), str2.size());
            str3 = str1.substr(str1.find('|') + 1, str1.find('\n'));
            std::cout << map.find(str2)->second << std::endl;
        }
        catch (BadInput &e)
        {
            std::cout << "Error: " << e.what() << str2 << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
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