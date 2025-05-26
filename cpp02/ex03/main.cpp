/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:41:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 01:35:12 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main()
{
	Point A(0, 0);
	Point B(10, 30);
	Point C(20, 0);

	Point P(15, 10);
	
	if (bsp(A, B, C, P))
		std::cout << "Inside\n";
	else
		std::cout << "Outside\n";

	return (0);
}