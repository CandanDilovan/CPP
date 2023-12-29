/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:56:57 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:18:05 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal_class.hpp"

class Dog : public Animal
{
    
public : 

	Dog(void);
	Dog(Dog const & src);
	virtual ~Dog(void);

	virtual void makeSound(void) const;

	Dog & operator=(Dog const & rhs);
};

#endif