/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:39:15 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/17 11:13:10 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void splitting(char **list, std::deque<int> &cont)
{
    std::deque<int> temp;
    int a = -1;
    while (list[++a])
    {
        if (std::atoi(list[a]) < 0 || std::atoi(list[a + 1]) < 0)
            throw NegNumber();
        else if (std::atol(list[a]) > INT_MAX || std::atol(list[a + 1]) > INT_MAX)
            throw IntTooBig();
        if (list[a + 1] == "/0" && a % 2 == 1)
            temp.push_front(std::atoi(list[a]));
        else
        {
            if (list[a] < list[a + 1])
            {
                cont.push_front(std::atoi(list[a]));
                temp.push_front(std::atoi(list[a + 1]));
            }
            else
            {
                cont.push_front(std::atoi(list[a + 1]));
                temp.push_front(std::atoi(list[a]));
            }
        }
    }
    std::deque<int>::iterator   it = temp.begin();

}

void insertmerge(std::deque<int> &cont, std::deque<int>::iterator   &it)
{
    it++;
    insertmerge(cont, it);
}