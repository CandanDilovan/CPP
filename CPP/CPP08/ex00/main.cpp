/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:18:45 by dcandan           #+#    #+#             */
/*   Updated: 2024/01/29 12:37:18 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::list<int> list;
    std::vector<int> veck(10, 100);

    for (int a = 0; a < 100; a++)
        list.push_back(a);
    try
    {
        easyfind(veck, 1);
        easyfind(veck, 100);
    }
    catch(std::exception &e)
    {
        std::cout << "error: " << e.what() << std::endl;
    }
    try
    {
        easyfind(list, 58);
        easyfind(list, 112);
    }
    catch(std::exception &e)
    {
        std::cout << "error: " << e.what() << std::endl;
    }
    return (0);
}