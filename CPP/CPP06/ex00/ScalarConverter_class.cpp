/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter_class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:06:42 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/23 13:41:20 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter_class.hpp"
	
ScalarConverter::ScalarConverter(void){
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter(void){
}

const char* ScalarConverter::ItsStr::what() const throw()
{
	return ("Error: not an int, double, float or char");
}

const char* ScalarConverter::OverInt::what() const throw()
{
	return ("Error: over int max or min");
}

const char* ScalarConverter::TooManyDots::what() const throw()
{
	return ("Error: too many dots in double or float numbers");
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

void ScalarConverter::ShowChar(char str)
{
	std::cout << "Char : " << str << std::endl;
	std::cout << "Int : " << static_cast<int>(str) << std::endl;
	std::cout << "Float : " << std::fixed << static_cast<float>(str) << "f" << std::endl;
	std::cout << "Double : " << static_cast<double>(str) << std::endl;
}

void ScalarConverter::ShowInt(int a)
{
	if (a < 33 || a > 127)
		std::cout << "Char : Non displyable" << std::endl;
	else
		std::cout << "Char : " << static_cast<char>(a) << std::endl;
	std::cout << "Int : " << a << std::endl;
	std::cout << "Float : " << std::fixed << static_cast<float>(a) << "f" << std::endl;
	std::cout << "Double : " << static_cast<double>(a) << std::endl;
}


void ScalarConverter::ShowDouble(double a)
{
	if (a < 33 || a > 127)
		std::cout << "Char : Non displyable" << std::endl;
	else
		std::cout << "Char : " << static_cast<char>(a) << std::endl;
	std::cout << "Int : " << static_cast<int>(a) << std::endl;
	std::cout << "Float : " << std::fixed << a << "f" << std::endl;
	std::cout << "Double : " << static_cast<double>(a) << std::endl;
}

void ScalarConverter::ShowFloat(float a)
{
	if (a < 33 || a > 127)
		std::cout << "Char : Non displyable" << std::endl;
	else
		std::cout << "Char : " << static_cast<char>(a) << std::endl;
	std::cout << "Int : " << static_cast<int>(a) << std::endl;
	std::cout << "Float : " << std::fixed << a << "f" << std::endl;
	std::cout << "Double : " << static_cast<double>(a) << std::endl;
}

void ScalarConverter::ShowOther(char *str)
{
	if (!strcmp("nan", str))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
	}
	else if (!strcmp("+inff", str))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: infff" << std::endl;
		std::cout << "Double: inff" << std::endl;
	}
	else if (!strcmp("-inff", str))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: -infff" << std::endl;
		std::cout << "Double: -inff" << std::endl;
	}
		if (!strcmp("nanf", str))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: nanff" << std::endl;
		std::cout << "Double: nanf" << std::endl;
	}
	else if (!strcmp("+inf", str))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: inff" << std::endl;
		std::cout << "Double: inf" << std::endl;
	}
	else if (!strcmp("-inf", str))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: -inff" << std::endl;
		std::cout << "Double: -inf" << std::endl;
	}
}



int ScalarConverter::ItsInt(char *str)
{
	if (atoi(str) > INT_MAX || atoi(str) < INT_MIN)
		throw OverInt();
	for (int a = 0; a < strlen(str); a++)
			if (str[a] < '0' || str[a] > '9')
				return (1);
	return (0);
}

int ScalarConverter::ItsFloat(char *str)
{
	int flag;

	flag = 0;
	for (int a = 0; a < strlen(str); a++)
	{
		if (str[a] >= '0' && str[a] <= '9' || str[a] == '.' || str[a] == 'f')
		{
			if (str[a] == '.')
				flag++;
			if (str[a + 1] == '\0' && str[a] == 'f' && flag == 1)
				return (0);
			if (flag > 1)
				throw TooManyDots();
		}
	}
	return (1);
}

int ScalarConverter::ItsDouble(char *str)
{
	int flag;

	flag = 0;
	for (int a = 0; a < strlen(str); a++)
	{
		if (str[a] >= '0' && str[a] <= '9' || str[a] == '.')
		{
			if (str[a] == '.')
				flag++;
			if (str[a + 1] == '\0' && str[a] >= '0' && str[a] <= '9' && flag == 1)
				return (0);
			else if (flag > 1)
				throw TooManyDots();
		}
	}
	return (1);
}

int ScalarConverter::ItsChar(char *str)
{
	for (int a = 0; a < strlen(str); a++)
		if (str[a] >= '!' && str[a] <= '~')
			if (a > 1)
				return (1);
	return (0);
}

void ScalarConverter::convert(char *str)
{
	try{
		if (!strcmp("nan", str) || !strcmp("+inff", str) || !strcmp("-inff", str) || !strcmp("nanf", str) || !strcmp("+inf", str) || !strcmp("-inf", str))
			return (ShowOther(str));
		else if (ItsInt(str) == 0)
		{
			int a = std::stoi(str, nullptr);
			return (ShowInt(a));
		}
		else if (ItsFloat(str) == 0)
		{
			float a = std::stof(str, nullptr);
			return (ShowFloat(a));
		}
		else if (ItsDouble(str) == 0)
		{	
			double a = std::stod(str, nullptr);
			return (ShowDouble(a));
		}
		else if (ItsChar(str) == 0)
		{
			return (ShowChar(str[0]));
		}
		else
			throw ItsStr();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}