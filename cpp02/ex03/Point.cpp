/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 00:56:43 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 01:11:03 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point (void)
: _x(0), _y(0) { return; }

Point::Point(const Point &p)
: _x(p._x), _y(p._y) { return; }

Point::Point (const Fixed &x, const Fixed &y)
: _x(x), _y(y) { return; }

Point::~Point (void) { return ; }

const Fixed& Point::getX( void ) const { return (this->_x); }
const Fixed& Point::getY( void ) const { return (this->_y); }