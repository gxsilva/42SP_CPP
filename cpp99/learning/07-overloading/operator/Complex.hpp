/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Complex.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:02:50 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/25 18:18:59 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Complex_H
#define Complex_H

class Complex
{
private:
		int		_x;
		int		_y;

public:
	Complex(int x, int y) : _x(x), _y(y) { return; };
	Complex (const Complex& complex);
	Complex& operator=(const Complex& complex);
	~Complex(void) { return; };
	//overloading the +(plus) operator
 	Complex operator+(const Complex& complex) const;

	const int	getX( void ) const { return (_x); };
	const int	getY( void ) const { return (_y); };
	const int	getSumXY( void ) const { return (_x + _y); };
};

#endif // Complex_H