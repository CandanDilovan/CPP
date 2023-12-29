/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:56:36 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/19 15:14:58 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "AAnimal_class.hpp"
# include "Brain_class.hpp"

class Cat : public AAnimal
{

protected :

	brain *catbrain;

public : 

	Cat(void);
	Cat(Cat const & src);
	virtual ~Cat(void);

	virtual void makeSound(void) const;

	Cat & operator=(Cat const & rhs);
};

#endif