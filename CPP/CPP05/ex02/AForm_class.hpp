/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm_class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:34:23 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/15 22:30:45 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP

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

class AForm
{

private : 

	const std::string	_name;
	bool				_signed;
	const int			_sgrade;
	const int			_egrade;

public :

	AForm(void);
	AForm(std::string name, int sgrade, int egrade);
	AForm(AForm const & src);
	virtual ~AForm(void);

	const std::string	getName(void) const;
	const int			getSgrade(void) const;
	const int			getEgrade(void) const;
	bool				getSigned(void) const;

	AForm & operator=(AForm const & rhs);

	void	beSigned(const Bureaucrat& bc);
	virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class IsNotSigned : public std::exception
	{
		public : 
			virtual const char* what() const throw();
	};

};

std::ostream & operator<<(std::ostream &str, AForm& f);

#endif