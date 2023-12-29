/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:09:45 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/20 16:31:27 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <ctime>

class Weapon
{

private : 

    std::string _type;

public :

    Weapon(std::string wtype);
    ~Weapon(void);
    const std::string* getType(void);
    void setType(std::string newType);
};

#endif