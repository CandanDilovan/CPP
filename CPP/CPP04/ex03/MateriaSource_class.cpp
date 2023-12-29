/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource_class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:58:43 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 18:28:41 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria_class.hpp"
# include "Ice_class.hpp"
# include "Cure_class.hpp"

MateriaSource::MateriaSource(void)
{
	for (int a = 0; a < 4; a++)
		learnedMateria[a] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		for (int a = 0; a < 4; a++)
			this->learnedMateria[a] = rhs.learnedMateria[a];
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int a = 0; a < 4; a++)
	{
		if (learnedMateria[a])
			delete learnedMateria[a];
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int a = 0; a < 4; a++)
	{
		if (this->learnedMateria[a] && a == 4)
			std::cout << "can't learn more Materia" << std::endl;
		else if (!this->learnedMateria[a])
		{
			this->learnedMateria[a] = m;
			return ;
		}
	}
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria* tmp;

	if (type == "ice")
		tmp = new Ice;
	else if (type == "cure")
		tmp = new Cure;
	else
	{
		std::cout << "Unknown Materia type" << std::endl;
		return (NULL);
	}
	return (tmp);
}

