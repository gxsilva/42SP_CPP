/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:35:29 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 18:42:30 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void)
{
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	// Test exception for adding too many numbers
	try {
		Span sp2(2);
		sp2.addNumber(1);
		sp2.addNumber(2);
		sp2.addNumber(3); // Should throw
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	// Test exception for not enough numbers
	try {
		Span sp3(10);
		sp3.addNumber(42);
		std::cout << sp3.shortestSpan() << std::endl; // Should throw
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Span sp4(3);
		int arr[] = {10, 13, 20};
		sp4.addNumber(arr, arr + 3);

		std::cout << "shortestSpan: ";
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << "longestSpan: ";
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
