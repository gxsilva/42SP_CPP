/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:02:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 01:34:39 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

static float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
	float result = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
	return (result < 0) ? -result : result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	//ABC
	float areaABC = area(
		a.getX().toInt(), a.getY().toInt(),
		b.getX().toInt(), b.getY().toInt(),
		c.getX().toInt(), c.getY().toInt()
	);

	//PBC
	float areaPBC = area(
		point.getX().toInt(), point.getY().toInt(),
		b.getX().toInt(), b.getY().toInt(),
		c.getX().toInt(), c.getY().toInt()
	);

	//PAC
	float areaPAC = area(
		a.getX().toInt(), a.getY().toInt(),
		point.getX().toInt(), point.getY().toInt(),
		c.getX().toInt(), c.getY().toInt()
	);

	//PAB
	float areaPAB = area(
		a.getX().toInt(), a.getY().toInt(),
		b.getX().toInt(), b.getY().toInt(),
		point.getX().toInt(), point.getY().toInt()
	);

	return (areaABC == (areaPBC + areaPAC + areaPAB));
}