/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:39:38 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/19 14:52:33 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP


# include <deque>
# include <vector>
# include <fstream>
# include <string>
# include <iostream>
# include <cstdlib>
# include <limits.h>
# include <ctime>
# include <algorithm>

void splitting(char **list, std::deque<int> &cont);
void recursiondeque(std::deque<int> &cont);
void binarysearch(std::deque<int> &cont, int insert);


void binarysearchvector(std::vector<int> &cont, int insert);
void recursionvector(std::vector<int> &cont);
void splittingvector(char **list, std::vector<int> &cont);


void printit(std::deque<int> &cont);
void printitv(std::vector<int> &cont);


class NegNumber : public std::exception
{
    public :
        virtual const char* what() const throw()
        {
            return ("Negative integrer found");
        }
};

class IntTooBig : public std::exception
{
    public :
        virtual const char* what() const throw()
        {
            return ("Integrer overflow");
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

#endif