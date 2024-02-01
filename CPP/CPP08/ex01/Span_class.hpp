/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:10:39 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/01 11:14:58 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <algorithm>
# include <string>
# include <iostream>
# include <map>
# include <list>
# include <vector>
# include <exception>

class Span
{

private :

    std::list<unsigned int>     _list;
    unsigned int                _size;
    
public :

    class Full : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("Containers is full");
            }
    };
    

    void    addNumber(unsigned int N);
    void    addArray(unsigned int first, unsigned int last);
    int     longestSpan(void);
    int     shortestSpan(void);

    Span(void);
    Span(unsigned int N);
    Span(const Span & src);
    ~Span(void);
    
    Span & operator=(const Span & rhs);
};



#endif