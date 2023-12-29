/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:57:24 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:18:16 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

class Animal
{
protected : 

	std::string type;

public : 

	Animal(void);
	Animal(Animal const & src);
	virtual ~Animal(void);

	virtual void makeSound(void) const;
	std::string getType(void) const;

	Animal & operator=(Animal const & rhs);
};

#endif