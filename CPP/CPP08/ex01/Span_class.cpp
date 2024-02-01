/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:14:54 by dcandan           #+#    #+#             */
/*   Updated: 2024/01/30 12:59:34 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span_class.hpp"

Span::Span(void) : _size(0){
}

Span::Span(unsigned int N) : _size(N){
}

Span::Span(const Span & src)
{
    *this = src;
}

Span & Span::operator=(const Span & rhs)
{
    if (this != &rhs)
    {
        _size = rhs._size;
        _list = rhs._list;
    }
    return (*this);
}

Span::~Span(void){;
}

int Span::longestSpan(void)
{
    unsigned int a = *std::min_element(_list.begin(), _list.end());
    unsigned int b = *std::max_element(_list.begin(), _list.end());
    return (b - a);
}

int Span::shortestSpan(void)
{
    std::list<unsigned int>::const_iterator  it;
    std::list<unsigned int>::const_iterator  it2 = _list.begin();
    std::list<unsigned int>::const_iterator  ite = _list.end();
    _list.sort();
    unsigned int a = 4294967295;
    it2++;
    for (it = _list.begin(); it != ite; it++)
    {
        if (a > (*it2 - *it))
            a = *it2 - *it;
        it2++;
        if (it2 == it)
            return (a);
    }
    return (a);
}

void Span::addArray(unsigned int first, unsigned int last)
{
    while(first < last)
    {
        addNumber(first);
        first++;
    }
}

void Span::addNumber(unsigned int N)
{
    if (_list.size() == _size)
        throw Full();
    else
        _list.push_back(N);
}