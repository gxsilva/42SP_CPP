/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:41:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/04 17:36:02 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define Fixed_H

#include <iostream>

class Fixed
{
private:
	int		_rawBits;
	static const int __fractionalBits;
public:
	Fixed( void );
	Fixed (const Fixed &fixed);
	
	Fixed& operator=(const Fixed &fixed);
	~Fixed( void );

	int		getRawBits ( void ) const;
	void	setRawBits ( int const raw );
};



#endif // Fixed_H