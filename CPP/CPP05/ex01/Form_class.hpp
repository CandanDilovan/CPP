/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:34:23 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 12:21:03 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>
# include "Bureaucrat_class.hpp"

class Bureaucrat;

class Form
{

private : 

	const std::string	_name;
	bool				_signed;
	const int			_sgrade;
	const int			_egrade;

public :

	Form(void);
	Form(std::string name, int sgrade, int egrade);
	Form(Form const & src);
	~Form(void);

	const std::string	getName(void);
	const int			getSgrade(void);
	const int			getEgrade(void);
	bool				getSigned(void);

	Form & operator=(Form const & rhs);

	void	beSigned(const Bureaucrat& bc);

	class GradeTooHighException : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};

	class AlreadySigned : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};

};

std::ostream & operator<<(std::ostream &str, Form& f);

#endif