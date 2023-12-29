/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:46:48 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/19 15:05:29 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat_class.hpp"
#include "Dog_class.hpp"
#include "Animal_class.hpp"
#include "WrongAnimal_class.hpp"
#include "WrongCat_class.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
    return 0;
}
