/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandan <dcandan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:25:11 by dcandan           #+#    #+#             */
/*   Updated: 2024/02/07 14:50:52 by dcandan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int ItsInt(std::string str)
{
	if (std::atoi(str.c_str()) > INT_MAX || std::atoi(str.c_str()) < INT_MIN)
		throw OverInt();
	for (size_t a = 0; a < str.size(); a++)
			if (str[a] < '0' || str[a] > '9' || std::atoi(str.c_str()) >= 10)
				return (1);
	return (0);
}

void calculate(std::stack<double> &stacked, std::string outcast)
{
	double one;
	double two;

	two = stacked.top();
	stacked.pop();
	one = stacked.top();
	stacked.pop();
	if (outcast == "-")
		stacked.push(one - two);
	else if (outcast == "+")
		stacked.push(one + two);
	else if (outcast == "*")
		stacked.push(one * two);
	else if (outcast == "/")
	{
		if (two == 0)
			throw NullDiv();
		stacked.push(one / two);
	}
}

void	allgud(std::string str)
{
	double number = 0;
	double ope = 0;
	
	for (size_t a = 0; a < str.size(); a++)
	{
		if ((str[a] >= '0' && str[a] <= '9') && str[a + 1] != ' ')
			throw NoSpace();
		if ((str[a] == '+' || str[a] == '-' || str[a] == '*' || str[a] == '/') && str[a + 1] != '\0')
			if (str[a + 1] != ' ')
				throw NoSpace();
		if (str[a] >= '0' && str[a] <= '9')
			number++;
		else if (str[a] == '+' || str[a] == '-' || str[a] == '*' || str[a] == '/')
			ope++;
	}
	if (number > (ope + 1))
		throw NotEnoughOperator();
	else if (number < (ope + 1))
		throw NotEnoughNumber();

}

void    stacking(std::string str)
{
	std::stack<double>	stacked;
	std::string		outcast;


	while (str.find(" ") != str.npos)
	{
		outcast = str.substr(0, str.find(" "));
		str.erase(0, outcast.size() + 1);
		if (ItsInt(outcast) == 1)
		{
			if (stacked.size() < 2)
				throw NotInt();
			if (outcast[0] == '-' || outcast[0] == '+' || outcast[0] == '*' || outcast[0] == '/')
				calculate(stacked, outcast);
			else
				throw NotInt();
		}
		else
			stacked.push(std::atof(outcast.c_str()));
	}
	if (str[1] == '\0')
	{
		outcast = str;
		calculate(stacked, outcast);
	}
	std::cout << stacked.top() << std::endl;	
}
