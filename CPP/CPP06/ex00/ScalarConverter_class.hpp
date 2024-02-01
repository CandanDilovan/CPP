/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:06:42 by dilovancand       #+#    #+#             */
/*   Updated: 2024/02/01 12:28:46 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS_HPP
# define SCALARCONVERTER_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>
# include <stdlib.h>
# include <cstring>
# include <limits.h>

class ScalarConverter 
{
	
private : 

	ScalarConverter(void);
	ScalarConverter(ScalarConverter const & src);
	~ScalarConverter(void);

	ScalarConverter & operator=(ScalarConverter const & rhs);

public :

	static void convert(char *str);
	static int	ItsInt(char *str);
	static int	ItsFloat(char *str);
	static int	ItsDouble(char *str);
	static int	ItsChar(char *str);
	static void	ShowChar(char str);
	static void	ShowInt(int a);
	static void	ShowDouble(double a);
	static void	ShowFloat(float a);
	static void	ShowOther(char *str);

	class ItsStr : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};

	class OverInt : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};

	class TooManyDots : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};
};

#endif