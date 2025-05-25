/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:41:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/25 04:14:29 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::__fractionalBits = 8;

Fixed::Fixed( void )
: _rawBits(0) { std::cout << "Default constructor called\n"; }

Fixed::Fixed( const int intValue )
{
	this->_rawBits = intValue << __fractionalBits;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float floatValue )
{
	this->_rawBits = static_cast<int>(roundf(floatValue)) << __fractionalBits;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed (const Fixed &fixed)
: _rawBits(fixed._rawBits) { std::cout << "Copy constructor called\n"; }

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed)
		this->_rawBits = fixed._rawBits;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
	return ;
};

int Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called\n";
	 return (this->_rawBits);
}
void Fixed::setRawBits ( int const raw ) { this->_rawBits = raw; }

