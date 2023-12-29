/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:46:48 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/19 15:17:17 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat_class.hpp"
#include "Dog_class.hpp"
#include "AAnimal_class.hpp"
#include "WrongAnimal_class.hpp"
#include "WrongCat_class.hpp"

int main()
{
   // AAnimal *b = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
    return 0;
}
