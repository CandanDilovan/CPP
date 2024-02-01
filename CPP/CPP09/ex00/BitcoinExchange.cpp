/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:44:51 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/01 14:38:20 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// void read_input(const char* filename)
// {
    
// }

void make_map(std::map<std::string, double> &map)
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
        map.insert(std::pair<std::string, double>(str2, atof(str3.c_str())));
    }
    
    

}