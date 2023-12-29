/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:19:47 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/13 15:10:41 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap_class.hpp"

class ScavTrap : public ClapTrap
{
	
public : 

	ScavTrap(void);
	ScavTrap(std::string Name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	void guardGate(void);
	void attack(const std::string& target);
	
	ScavTrap & operator=(ScavTrap const & rhs);
};

#endif