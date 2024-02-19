/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:03:38 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/19 14:47:24 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    std::deque<int> cont;
    std::vector<int> contv;

    splitting(argv, cont);
    splittingvector(argv, contv);
    // std::deque<int>::iterator it;
    // std::deque<int>::iterator ite  = cont.end();
    // for (it = cont.begin(); it < ite; it++)
    // {
    //     std::cout << *it << " ";
    // }
    printit(cont);
    printitv(contv);
    return (0);
}
