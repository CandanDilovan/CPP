/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:50:29 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/01 14:39:23 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
        return (-1);
    try
    {
        std::map<std::string, double>    map;
        make_map(map);
        std::map<std::string, double>::iterator it = map.begin();
        std::map<std::string, double>::iterator ite = map.end();
        while(it != ite)
        {
            std::cout << it->first << " - ";
            std::cout << it->second << std::endl;
            it++;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}