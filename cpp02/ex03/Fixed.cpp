/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:41:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 01:28:45 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::__fractionalBits = 8;

/* ============CONSTRUCTOR(S)============= */

Fixed::Fixed( void )
: _rawBits(0) { return; }

Fixed::Fixed( const int intValue )
{ this->_rawBits = intValue * (1 << Fixed::__fractionalBits); }

Fixed::Fixed( const float floatValue )
{ this->_rawBits = static_cast<int>(roundf(floatValue * (1 << Fixed::__fractionalBits))); }
	
Fixed::Fixed (const Fixed &fixed)
: _rawBits(fixed._rawBits) { return; }

/* ============COMMON OVERLOADING============= */

Fixed& Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
		this->_rawBits = fixed._rawBits;
	return (*this);
}

std::ostream& operator<<(std::ostream &oS, Fixed const &param)
{
	oS << param.toFloat();
	return (oS);
}

/* ============DESTRUCTOR============= */

Fixed::~Fixed(void) { return ; }

/* ============GETTERS && SETTERS============= */

int Fixed::getRawBits ( void ) const
{ return ((this->_rawBits >> Fixed::__fractionalBits)); }

void Fixed::setRawBits ( int const raw ) { this->_rawBits = raw; }

/* ============METHODS============= */

float	Fixed::toFloat ( void ) const
{ return ((float)(this->_rawBits / (float)(1 <<  Fixed::__fractionalBits))); }

int		Fixed::toInt ( void ) const
{ return (this->_rawBits >> Fixed::__fractionalBits); }

/* ============COMPARE OPERATOR============= */

bool Fixed::operator<(Fixed const &p2) const
{ return (this->getRawBits() < p2.getRawBits()); }

bool Fixed::operator>(Fixed const &p2) const
{ return (this->getRawBits() > p2.getRawBits()); }

bool Fixed::operator>=(Fixed const &p2) const
{ return (this->getRawBits() >= p2.getRawBits()); }

bool Fixed::operator<=(Fixed const &p2) const
{ return (this->getRawBits() <= p2.getRawBits()); }

bool Fixed::operator==(Fixed const &p2) const
{ return (this->getRawBits() == p2.getRawBits()); }

bool Fixed::operator!=(Fixed const &p2) const
{ return (this->getRawBits() != p2.getRawBits()); }

/* ============ANALITC OPERATOR============= */

Fixed Fixed::operator+(Fixed const &p2) const
{
	Fixed newFixed;

	newFixed._rawBits = this->_rawBits + p2._rawBits;
	return (newFixed);
}

Fixed Fixed::operator-(Fixed const &p2) const
{
	Fixed newFixed;

	newFixed._rawBits = this->_rawBits - p2._rawBits;
	return (newFixed);
}

Fixed Fixed::operator*(Fixed const &p2) const
{
	Fixed newFixed;
	newFixed._rawBits = (this->_rawBits * p2._rawBits) >> Fixed::__fractionalBits;
	return (newFixed);
}

Fixed Fixed::operator/(Fixed const &p2) const
{
	Fixed newFixed;

	float result = this->toFloat() / p2.toFloat();
	newFixed._rawBits = static_cast<int>(result * (1 << Fixed::__fractionalBits));
	return newFixed;
}

/* ============INCREMENT============= */

Fixed& Fixed::operator++(void)
{
	this->_rawBits += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	fixedCoppy (*this);

	this->_rawBits += 1;
	return (fixedCoppy);
}

/* ============DECREMENT============= */

Fixed& Fixed::operator--(void)
{
	this->_rawBits -= 1 * (1 << Fixed::__fractionalBits);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	fixedCoppy (*this);

	this->_rawBits -= 1 * (1 << Fixed::__fractionalBits);
	return (fixedCoppy);
}

/* ============STATIC METHODS============= */

Fixed&	Fixed::min (Fixed& f1, Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed&	Fixed::min (const Fixed& f1, const Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}
