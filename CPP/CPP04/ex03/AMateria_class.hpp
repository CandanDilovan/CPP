/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:20:49 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 17:59:29 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>
# include "ICharacter_class.hpp"
# include "IMateriaSource_class.hpp"
# include "Character_class.hpp"
# include "MateriaSource_class.hpp"

class ICharacter;

class AMateria
{

protected:

    std::string _type;

public:

    AMateria(void);
    AMateria(std::string const & type);
    AMateria(AMateria const & src);
    virtual ~AMateria(void);

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

    AMateria & operator=(AMateria const & rhs);
};

#endif