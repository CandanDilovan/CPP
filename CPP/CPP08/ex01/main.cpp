/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:18:45 by dcandan           #+#    #+#             */
/*   Updated: 2024/01/30 13:03:47 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span_class.hpp"

int main(void)
{
    Span sp = Span(1000000);
    Span truc = sp;

    try{
        sp.addArray(0,1000000);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    Span machin(sp);
    try{
        truc.addArray(0, 12);
        std::cout << machin.shortestSpan() << std::endl;
        std::cout << truc.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return (0);
}