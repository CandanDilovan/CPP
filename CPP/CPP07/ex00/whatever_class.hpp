/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:13:36 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/25 15:03:01 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CLASS_HPP
# define WHATEVER_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

	
template<typename T>
void swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T const &min(T const & a, T const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T const &max(T const & a, T const & b)
{
	if (a < b)
		return (b);
	else
		return (a);
}
#endif