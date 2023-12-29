/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:28:52 by dilovancand       #+#    #+#             */
/*   Updated: 2023/11/29 14:41:20 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


Phonebook::Phonebook(){
}

Phonebook::~Phonebook(){
}

Contact::Contact(){
}

Contact::~Contact(){
}

static void	ft_nn(Phonebook &Book, int a)
{
	int b;
	int c;
	b = 10 - Book.contact[a].nn.size();
	c = 0;
	while (Book.contact[a].nn[c] && c < 9)
	{
		if (b > 0)
		{
			std::cout << ' ';
			b--;
		}
		else 
		{
			if (Book.contact[a].nn[c] < 33 || Book.contact[a].nn[c] > 127)
				std::cout << ' ';
			else 
				std::cout << Book.contact[a].nn[c];
			c++;
		}
	}	
		if (Book.contact[a].nn.size() > 9)
			std::cout << '.';
	std::cout << '|' << std::endl;;
}


static void	ft_ln(Phonebook &Book, int a)
{
	int b;
	int c;
	b = 10 - Book.contact[a].ln.size();
	c = 0;
	while (Book.contact[a].ln[c] && c < 9)
	{
		if (b > 0)
		{
			std::cout << ' ';
			b--;
		}
		else 
		{
			if (Book.contact[a].ln[c] < 33 || Book.contact[a].ln[c] > 127)
				std::cout << ' ';
			else 
				std::cout << Book.contact[a].ln[c];
			c++;
		}
	}	
		if (Book.contact[a].ln.size() > 9)
			std::cout << '.';
	std::cout << '|';
	ft_nn(Book, a);
}

static void	ft_space(Phonebook &Book, int a)
{
	int b;
	int c;

	std::cout << std::right << std::setw(10) << a;
	std::cout << '|';
	b = 10 - Book.contact[a].fn.size();
	c = 0;
	while (Book.contact[a].fn[c] && c < 9)
	{
		if (b > 0)
		{
			std::cout << ' ';
			b--;
		}
		else 
		{
			if (Book.contact[a].fn[c] < 33 || Book.contact[a].fn[c] > 127)
				std::cout << ' ';
			else 
				std::cout << Book.contact[a].fn[c];
			c++;
		}
	}	
		if (Book.contact[a].fn.size() > 9)
			std::cout << '.';
	std::cout << '|';
	ft_ln(Book, a);
}

static void ft_fill(Phonebook &Book, int a)
{
	std::cout << "First name : ";
	std::getline(std::cin, Book.contact[a].fn);
	std::cout << "Last name : ";
	std::getline(std::cin, Book.contact[a].ln);
	std::cout << "Nickname : ";
	std::getline(std::cin, Book.contact[a].nn);
	std::cout << "Phone number : ";
	std::getline(std::cin, Book.contact[a].nb);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, Book.contact[a].ds);
}

static void ft_index(Phonebook &Book, int a)
{
	std::cout << "First name : " << Book.contact[a].fn << std::endl;
	std::cout << "Last name : " << Book.contact[a].ln << std::endl;
	std::cout << "Nickname : " << Book.contact[a].nn << std::endl;
	std::cout << "Phone number : " << Book.contact[a].nb << std::endl;
	std::cout << "Darkest secret : " << Book.contact[a].ds << std ::endl;
}

int main()
{
	int a;
	int b;
	int	contact;
	std::string str;
	Phonebook Book;

	a = 0;
	contact = 0;
	while (1)
	{
		std::cout << "ADD to add contact, SEARCH to look for an added contact, EXIT to quit" << std::endl;
		std::getline(std::cin, str);
		if (strncmp(str.c_str(), "ADD", 4) == 0)
		{
			ft_fill(Book, a);
			a++;
			if (contact < 8)
				contact++;
		}
		else if (strncmp(str.c_str(), "EXIT", 5) == 0)
			break ;
		else if (strncmp(str.c_str(), "SEARCH", 6) == 0)
		{
			b = 0;
			while (b < contact)
			{
				ft_space(Book, b);
				b++;
			}
			if (contact <= 0)
				std::cout << "Add a contact first" << std::endl;
			else
			{
				std::cout << "Index : " << std::endl;
				std::getline(std::cin, str);
				if (str[0] >= '0' && str[0] <= '9')
				{
					b = atoi(str.c_str());
					if (b > 7 || (contact - 1) < b)
						std::cout << "Wrong index" << std::endl;
					else
						ft_index(Book, b);
				}
				else
					std::cout << "Wrong index" << std::endl;
			}
		}
		else
			std::cout << "Wrong input" << std::endl;
		if (a > 7)
			a = 0;
	}
}