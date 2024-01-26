/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:07:28 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/25 15:53:15 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CLASS_HPP
# define ITER_CLASS_HPP


# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

template<typename T>
T fonction(T a)
{
	return (a + a);
}

template<typename T>
void iter(T *array, int size, T(*f)(T))
{
	int	a = 0;
	while (size > a)
	{
		array[a] = (f)(array[a]);
		a++;
	}
}

#endif