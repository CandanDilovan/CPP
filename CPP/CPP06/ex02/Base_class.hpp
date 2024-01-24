/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:19:52 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/24 14:42:28 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

class Base
{

public :

	Base *generate(void);
	void identify(Base *p);
	void identify(Base &p);
	virtual ~Base(void);
};

#endif