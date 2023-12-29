/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:19:47 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/13 15:46:24 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap_class.hpp"

class FragTrap : public ClapTrap
{
	
public : 

	FragTrap(void);
	FragTrap(std::string Name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	void highFivesGuys(void);
	
	FragTrap & operator=(FragTrap const & rhs);
};

#endif