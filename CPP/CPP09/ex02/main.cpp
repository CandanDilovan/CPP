/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:03:38 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/20 11:43:39 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    try
    {
        std::deque<int> cont;
        std::vector<int> contv;

        splitting(argv, argc, cont);
        splittingvector(argv, argc, contv);
    }
    catch(std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return (0);
}
