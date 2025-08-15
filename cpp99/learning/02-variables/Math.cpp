/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Math.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:10:39 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 20:01:24 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // max() and min() come from iostream
#include <cmath> // sqrt(), round(), log()

int main(void)
{
	int		x = 10;
	int		y = 15;
	float	z = 5.2;
	float	a = 6.6;

	int		conditional;

	conditional = x > y ? 20 : 15;

	std::cout << "ternary operator: " << conditional << "\n";
	
	std::cout << "The max value between " << x << " and " << y << " are " << std::max(x, y) << "\n";
	std::cout << "The min value between " << x << " and " << y << " are " << std::min(x, y) << "\n";
	std::cout << "The value " << z << " rounded is " << round(z) << "\n";
	std::cout << "The value " << z << " rounded is " << round(a) << "\n";
	
	return (0);
}