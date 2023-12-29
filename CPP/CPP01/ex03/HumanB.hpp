/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:37:25 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/10 18:31:43 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <ctime>
# include "Weapon.hpp"

class HumanB
{

private :

    Weapon *_Weapon;
    const std::string _name;

public : 

    HumanB(std::string name);
    ~HumanB(void);
    void setWeapon(Weapon &Weapon);
    void attack(void);    

};

#endif