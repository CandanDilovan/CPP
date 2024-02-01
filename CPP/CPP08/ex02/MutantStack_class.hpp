/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack_class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:54:17 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/01 11:15:34 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

# include <algorithm>
# include <string>
# include <iostream>
# include <map>
# include <stack>
# include <list>
# include <vector>
# include <exception>

template<typename T>
class MutantStack : public std::stack<T>
{

private :


public :

    MutantStack(void){
    };

    MutantStack(const MutantStack & src)
    {
        *this = src;
    };

    virtual ~MutantStack(void){
    };
    
    MutantStack & operator=(const MutantStack & rhs)
    {
        if (this != &rhs)
            return(*this);
        return(*this);
    };

    typedef typename std::deque<T>::iterator iterator;
    iterator begin()
    {
        return (this->c.begin());
    };
    iterator end()
    {
        return (this->c.end());
    };




};

#endif