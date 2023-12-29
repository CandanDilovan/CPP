/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:51:02 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 17:47:01 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria_class.hpp"

class Cure : public AMateria
{

public :

	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const & src);
	~Cure(void);

	virtual AMateria* clone(void) const;
	Cure & operator=(Cure const & rhs);	
};

#endif