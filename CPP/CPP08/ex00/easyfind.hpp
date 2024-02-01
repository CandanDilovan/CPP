/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:21:30 by dcandan           #+#    #+#             */
/*   Updated: 2024/01/29 12:18:34 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <string>
# include <iostream>
# include <map>
# include <list>
# include <vector>
# include <exception>

class NotFound : public std::exception
{
    public :
        virtual const char* what() const throw()
        {
            return ("element not found in containers");
        }
};

template<typename T>
void easyfind(const T & cont, const int a)
{
    if (std::find(cont.begin(), cont.end(), a) == cont.end())
        throw NotFound();
    else
        std::cout << "element found in containers" << std::endl;
}

#endif