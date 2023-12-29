/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:57:24 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/19 15:14:46 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

class AAnimal
{
protected : 

	std::string type;

public : 

	AAnimal(void);
	AAnimal(AAnimal const & src);
	virtual ~AAnimal(void);

	virtual void makeSound(void) const = 0;
	std::string getType(void) const;

	AAnimal & operator=(AAnimal const & rhs);
};

#endif