/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:16:34 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/25 18:19:52 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Complex.hpp"

int main(void)
{
	Complex a(5, 6);
	Complex b(10, 12);

	Complex c = a + b;

	std::cout << a.getX() << std::endl;
	std::cout << a.getY() << std::endl;
	std::cout << a.getSumXY() << std::endl << std::endl;

	std::cout << b.getX() << std::endl;
	std::cout << b.getY() << std::endl;
	std::cout << b.getSumXY() << std::endl << std::endl;

	
	std::cout << c.getX() << std::endl;
	std::cout << c.getY() << std::endl;
	std::cout << c.getSumXY() << std::endl;
	return (0);
}