/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice_class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:47:28 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 17:47:24 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria_class.hpp"

class Ice : public AMateria
{

public :

	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const & src);
	~Ice(void);

	virtual AMateria* clone() const;
	Ice & operator=(Ice const & rhs);	
};

#endif