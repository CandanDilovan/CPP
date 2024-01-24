/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:06:42 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/23 13:32:09 by dilovancand      ###   ########.fr       */
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