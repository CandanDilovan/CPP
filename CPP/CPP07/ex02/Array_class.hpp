/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array_class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:19:13 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/26 08:32:27 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>
# include <exception>
# include <thread>
# include <chrono>

template<typename T>
class Array
{
private :
	int _size;

public : 
	T *_list;

	class OutOfBound : public std::exception
	{
		public : 
			virtual const char* what() const throw()
			{
				return ("index is out of bounds");
			}
	};

	Array<T>(void) : _size(1){
		_list = new T[1];
	};

	Array<T>(unsigned int a) : _size(a){
		_list = new T[a];
	};

	Array<T>(const Array<T> & src){
		*this = src;
	};

	T & operator[](int index){
		if (index > size() || index < 0)
			throw OutOfBound();
		else
			return (this->_list[index]);
	};

	Array<T> & operator=(const Array<T> & rhs){
		
		this->_size = rhs.size();
		this->_list = new T[size()];
		for (int b = 0; rhs.size() > b; b++)
			this->_list[b] = rhs._list[b];
		return (*this);
	};

	int size(void) const
	{
		return (this->_size);
	};

	~Array<T>(void){
	};
	
};

#endif 