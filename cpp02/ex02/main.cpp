/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:41:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/04 18:26:26 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
// #include <cassert>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

// void test_increment()
// {
// 	Fixed a;
// 	assert(a.toFloat() == 0.0f);

// 	Fixed pre = ++a;
// 	assert(pre.toFloat() == 1.0f / (1 << 8)); // 1/256

// 	Fixed post = a++;
// 	assert(post.toFloat() == 1.0f / (1 << 8));
// 	assert(a.toFloat() == 2.0f / (1 << 8));
// }

// void test_arithmetic()
// {
// 	Fixed a(2);
// 	Fixed b(3.5f);

// 	Fixed sum = a + b;
// 	assert(sum.toFloat() == 5.5f);

// 	Fixed diff = b - a;
// 	assert(diff.toFloat() == 1.5f);

// 	Fixed prod = a * b;
// 	assert(prod.toFloat() == 7.0f);

// 	Fixed quot = b / a;
// 	assert(quot.toFloat() > 1.74f && quot.toFloat() < 1.76f); // 3.5/2 = 1.75
// }

// void test_comparisons()
// {
// 	Fixed a(10);
// 	Fixed b(20);

// 	assert(a < b);
// 	assert(b > a);
// 	assert(a <= b);
// 	assert(b >= a);
// 	assert(a != b);

// 	Fixed c(10);
// 	assert(a == c);
// 	assert(a <= c);
// 	assert(a >= c);
// }

// void test_max_min()
// {
// 	Fixed a(42.42f);
// 	Fixed b(21.21f);

// 	assert(Fixed::max(a, b) == a);
// 	assert(Fixed::min(a, b) == b);
// }

// int main()
// {
// 	test_increment();
// 	test_arithmetic();
// 	test_comparisons();
// 	test_max_min();

// 	std::cout << "All tests passed!" << std::endl;
// 	return 0;
// }