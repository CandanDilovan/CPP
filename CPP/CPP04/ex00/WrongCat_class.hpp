/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:56:36 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:18:09 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include "WrongAnimal_class.hpp"

class WrongCat : public WrongAnimal
{
    
public : 

	WrongCat(void);
	WrongCat(WrongCat const & src);
	virtual ~WrongCat(void);

	void makeSound(void) const;

	WrongCat & operator=(WrongCat const & rhs);
};

#endif