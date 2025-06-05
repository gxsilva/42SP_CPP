/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:41:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/05 18:20:43 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int		_rawBits;
	static const int __fractionalBits;

public:
	Fixed( void );
	Fixed( const int intValue );
	Fixed( const float floatValue );
	Fixed (const Fixed &fixed);

	Fixed& operator=(const Fixed &fixed);
	
	bool operator<(Fixed const &p2) const;
	bool operator>(Fixed const &p2) const;
	bool operator>=(Fixed const &p2) const;
	bool operator<=(Fixed const &p2) const;
	bool operator==(Fixed const &p2) const;
	bool operator!=(Fixed const &p2) const;

	Fixed operator+(Fixed const &p2) const;
	Fixed operator-(Fixed const &p2) const;
	Fixed operator*(Fixed const &p2) const;
	Fixed operator/(Fixed const &p2) const;

	Fixed& operator++(void);       // Prefix increment
	/*
	int is a dummy argument to differentiatte it from the prefix version
	it return a copy of the current Fixed and before increment the real one
	*/
	Fixed operator++(int);         // Postfix increment
	Fixed& operator--(void);       // Prefix decrement
	Fixed operator--(int);         // Postfix decrement

	~Fixed( void );

	int		getRawBits ( void ) const;
	void	setRawBits ( int const raw );
	float	toFloat ( void ) const;
	int		toInt ( void ) const;

	static Fixed&	min (Fixed& f1, Fixed &f2);
	static Fixed&	max (Fixed& f1, Fixed &f2);
	static const Fixed&	min (const Fixed& f1, const Fixed &f2);
	static const Fixed&	max (const Fixed& f1, const Fixed &f2);
};

std::ostream& operator<<(std::ostream &oS, Fixed const &param);

#endif // Fixed_H