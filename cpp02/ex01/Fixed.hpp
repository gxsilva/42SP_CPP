/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:41:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 20:03:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <cmath>
/*

Qm.n -> Q8.8

± 1, m1, m2, ... * 2^e

static_cast<type> -> the new casting
*/

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

	~Fixed( void );

	int		getRawBits ( void ) const;
	void	setRawBits ( int const raw );
	float	toFloat ( void ) const;
	int		toInt ( void ) const;
};

std::ostream& operator<<(std::ostream &oS, Fixed const &param);

#endif // Fixed_H