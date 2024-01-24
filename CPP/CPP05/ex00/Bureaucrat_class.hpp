/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat_class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 20:06:31 by dilovancand       #+#    #+#             */
/*   Updated: 2024/01/16 12:20:08 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

class Bureaucrat
{
	
private :

	const std::string	_name;
	int			_grade;
	
public :

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	std::string getName(void);
	int			getGrade(void);

	Bureaucrat & operator=(Bureaucrat const & rhs);

	void	upgrade(void);
	void	downgrade(void);

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


};

std::ostream & operator<<(std::ostream &str, Bureaucrat& bc);

#endif