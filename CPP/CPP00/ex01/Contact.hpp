/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:59:48 by dilovancand       #+#    #+#             */
/*   Updated: 2023/11/28 18:04:24 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{

public :

    std::string fn;
    std::string ln;
    std::string nn;
    std::string nb;
    std::string ds;
    
    Contact(void);
    ~Contact(void);
};

#endif