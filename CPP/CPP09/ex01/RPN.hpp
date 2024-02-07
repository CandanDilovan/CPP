/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:18:11 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/07 14:47:44 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <fstream>
# include <string>
# include <iostream>
# include <cstdlib>
# include <limits.h>
# include <algorithm>

void stacking(std::string str);
void allgud(std::string str);

class OverInt : public std::exception
{
    public : 
        virtual const char* what() const throw()
        {
            return ("number too large");
        }
};

class NotEnoughOperator : public std::exception
{
    public : 
        virtual const char* what() const throw()
        {
            return ("Not enough operators");
        }
};

class NotInt : public std::exception
{
    public : 
        virtual const char* what() const throw()
        {
            return ("Wrong arguments");
        }
};

class NullDiv : public std::exception
{
    public : 
        virtual const char* what() const throw()
        {
            return ("Cannot divide by 0");
        }
};

class NoSpace: public std::exception
{
    public : 
        virtual const char* what() const throw()
        {
            return ("Need space beetween operators and numbers");
        }
};

class NotEnoughNumber : public std::exception
{
    public : 
        virtual const char* what() const throw()
        {
            return ("Not enough numbers");
        }
};


#endif