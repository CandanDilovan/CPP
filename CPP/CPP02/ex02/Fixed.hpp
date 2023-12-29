/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:33:07 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/12 18:59:43 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <ctype.h>
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cmath>

class Fixed
{

private : 

	int					_bit;
	static const int	_eightbit;

public : 

	Fixed(void);
	Fixed(float const decimale);
	Fixed(int const entier);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);

	bool operator<(Fixed const & rhs);
	bool operator>(Fixed const & rhs);
	bool operator>=(Fixed const & rhs);
	bool operator<=(Fixed const & rhs);
	bool operator==(Fixed const & rhs);
	bool operator!=(Fixed const & rhs);

	Fixed & operator+(Fixed const & rhs);
	Fixed & operator-(Fixed const & rhs);
	Fixed & operator*(Fixed const & rhs);
	Fixed & operator/(Fixed const & rhs);

	Fixed & operator++();
	Fixed operator++(int);
	Fixed & operator--();
	Fixed operator--(int);

	static Fixed min(const Fixed& a, const Fixed& b);
	static Fixed max(const Fixed& a, const Fixed& b);
	static Fixed min(Fixed& a, Fixed& b);
	static Fixed max(Fixed& a, Fixed& b);
	
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif