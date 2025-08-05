/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:11:01 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/04 21:13:35 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		add(int x, int y) { return (x + y); }
float	add(float x, float y) { return (x + y); }

int		multiply(int x, int y = 12) { return (x * y); }

int main(int argc, char const *argv[])
{
	std::cout << "Both int: " << add(8, 2) << std::endl;
	std::cout << "Both Float: " << add(2.5f, 3.7f) << std::endl;
	return 0;
}
