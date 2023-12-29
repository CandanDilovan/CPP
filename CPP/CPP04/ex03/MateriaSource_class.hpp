/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource_class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:56:59 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 17:54:56 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALSOURCE_CLASS_HPP
# define MATERIALSOURCE_CLASS_HPP

# include "AMateria_class.hpp"

class MateriaSource : public IMateriaSource
{

private : 

	AMateria* learnedMateria[4];

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);
	
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
	
	MateriaSource & operator=(MateriaSource const & rhs);
};

#endif