/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer_class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:02:24 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/23 14:27:18 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS_HPP
# define SERIALIZER_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

struct Data
{
	std::string name;
	int 		a;
};

class Serializer
{
	
private :
	
	Serializer(void);
	Serializer(Serializer const & src);
	
	Serializer & operator=(Serializer const & rhs);
	
public :

	~Serializer(void);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

};

#endif