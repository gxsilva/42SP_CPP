/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Complex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:06:57 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/25 18:32:39 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Complex.hpp"

Complex::Complex (const Complex& complex)
: _x(complex._x), _y(complex._y) { return; }

Complex& Complex::operator=(const Complex& complex)
{
	if (this != &complex)
	{
		this->_x = complex._x;
		this->_y = complex._y;
	}
	return (*this);
}

//Overloading the '+'(plus) operator to sum both value into a new Complex instance
Complex Complex::operator+(const Complex& complex) const
{
	Complex newComplex(*this);

	newComplex._x += complex._x;
	newComplex._y += complex._y;

	return (newComplex); // this value is copy/move to outside the function scope
}
