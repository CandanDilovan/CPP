/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:42:12 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/01 15:48:14 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <fstream>
# include <string>
# include <iostream>
# include <cstdlib>

void    make_map(std::map<std::string, double> *map);
void    read_input(const char* filename, std::map<std::string, double> &map);

class NotOpen : public std::exception
{
    public :
        virtual const char *what() const throw()
        {
            return ("File cannot be opened");
        }
};

class BadInput : public std::exception
{
    public :
        virtual const char *what() const throw()
        {
            return ("bad input => ");
        }
};

#endif