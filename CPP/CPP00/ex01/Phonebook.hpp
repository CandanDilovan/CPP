/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:16:07 by dilovancand       #+#    #+#             */
/*   Updated: 2023/11/28 18:41:12 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>

class Phonebook 
{

public :

    Contact contact[8];

    Phonebook (void);
    ~Phonebook (void);
};

#endif