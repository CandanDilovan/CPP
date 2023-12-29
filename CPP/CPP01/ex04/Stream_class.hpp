/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:28:25 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/11 01:42:50 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>

class Stream
{

public :

	std::string 		str;
	std::string 		rstr;
	std::string			streamstr;
	std::size_t			grossdiff;
	
	Stream(std::string str, std::string rstr, std::string path);
	~Stream(void);
};