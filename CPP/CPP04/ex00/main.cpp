/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:46:48 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/18 15:35:13 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat_class.hpp"
#include "Dog_class.hpp"
#include "Animal_class.hpp"
#include "WrongAnimal_class.hpp"
#include "WrongCat_class.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* a = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << a->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    a->makeSound();
    meta->makeSound();

    delete(j);
    delete(i);
    delete(meta);
    delete(a);
    return (1);
}