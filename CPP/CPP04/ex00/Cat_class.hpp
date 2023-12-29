/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:56:36 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:18:09 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal_class.hpp"

class Cat : public Animal
{
    
public : 

	Cat(void);
	Cat(Cat const & src);
	virtual ~Cat(void);

	virtual void makeSound(void) const;

	Cat & operator=(Cat const & rhs);
};

#endif