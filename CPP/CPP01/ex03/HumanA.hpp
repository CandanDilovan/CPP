/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:05:13 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/10 18:29:11 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <ctime>
# include "Weapon.hpp"

class HumanA 
{

private :

    Weapon &_Weapon;
    const std::string _name;

public : 

    HumanA(std::string name, Weapon &Weapon);
    ~HumanA(void);
    void attack(void);    

};

#endif