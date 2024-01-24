/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern_class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:02:07 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/17 15:27:01 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include "AForm_class.hpp"
#include "ShrubberyCreationForm_class.hpp"
#include "RobotomyRequestForm_class.hpp"
#include "PresidentialPardonForm_class.hpp"

class Intern
{

public : 

	Intern(void);
	Intern(const Intern & src);
	~Intern(void);

	AForm* Presidential(std::string Target);
	AForm* Robotomy(std::string Target);
	AForm* Shrubbery(std::string Target);
	AForm* MakeForm(std::string Type, std::string Target);

	class WrongType : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	Intern &operator=(Intern const & rhs);

};

#endif