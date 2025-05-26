/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 00:41:54 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 01:27:26 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_H
#define Point_H

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	const Fixed		_x;
	const Fixed		_y;

public:
	Point( void );
	Point (const Point &p);
	// Point& operator=(const Point &p) = delete;
	Point (const Fixed &x, const Fixed &y);
	~Point(void);

	const Fixed& getX( void ) const;
	const Fixed& getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif // Point_H