/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:36:12 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/11 21:13:44 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, const char *argv[])
{
	(void)argc;
	(void)argv;

	//------------------INF---------------
	std::cout << PURPLE << "---------INF---------" << RESET << std::endl;
	std::cout << "inf" << std::endl;
	ScalarConverter::convert("inf");
	std::cout << std::endl;

	std::cout << "+inf" << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;

	std::cout << "-inf" << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;

	//------------------INFF---------------
	std::cout << PURPLE << "---------INFF---------" << RESET << std::endl;
	std::cout << "inff" << std::endl;
	ScalarConverter::convert("inff");
	std::cout << std::endl;

	std::cout << "+inff" << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;

	std::cout << "-inff" << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;

	//------------------NAN---------------
	std::cout << PURPLE << "---------NAN---------" << RESET << std::endl;
	std::cout << "nan" << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;

	std::cout << "+nan" << std::endl;
	ScalarConverter::convert("+nan");
	std::cout << std::endl;

	std::cout << "-nan" << std::endl;
	ScalarConverter::convert("-nan");
	std::cout << std::endl;

	//------------------NANF---------------
	std::cout << PURPLE << "---------NANF---------" << RESET << std::endl;
	std::cout << "nanf" << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;

	std::cout << "+nanf" << std::endl;
	ScalarConverter::convert("+nanf");
	std::cout << std::endl;

	std::cout << "-nanf" << std::endl;
	ScalarConverter::convert("+nanf");

	//------------------CHAR---------------
	std::cout << PURPLE << "---------CHAR---------" << RESET << std::endl;
	std::cout << "a" << std::endl;
	ScalarConverter::convert("a");
	std::cout << std::endl;

	std::cout << "\'a\'" << std::endl;
	ScalarConverter::convert("\'a\'");
	std::cout << std::endl;

	//------------------INTEGER---------------
	std::cout << PURPLE << "---------INTEGER---------" << RESET << std::endl;
	std::cout << "42" << std::endl;
	ScalarConverter::convert("42");
	std::cout << std::endl;

	std::cout << "67" << std::endl;
	ScalarConverter::convert("67");
	std::cout << std::endl;

	std::cout << "0" << std::endl;
	ScalarConverter::convert("0");
	std::cout << std::endl;

	std::cout << "-123" << std::endl;
	ScalarConverter::convert("-123");
	std::cout << std::endl;

	std::cout << "2147483647" << std::endl; // INT_MAX
	ScalarConverter::convert("2147483647");
	std::cout << std::endl;

	std::cout << "-2147483648" << std::endl; // INT_MIN
	ScalarConverter::convert("-2147483648");
	std::cout << std::endl;

	std::cout << "  123  " << std::endl; // Leading/trailing spaces
	ScalarConverter::convert("  123  ");
	std::cout << std::endl;

	std::cout << "+456" << std::endl; // Explicit plus sign
	ScalarConverter::convert("+456");
	std::cout << std::endl;

	std::cout << "-456" << std::endl; // Explicit plus sign
	ScalarConverter::convert("-456");
	std::cout << std::endl;

	std::cout << "12abc34" << std::endl; // Invalid integer input
	ScalarConverter::convert("12abc34");
	std::cout << std::endl;

	std::cout << "-0" << std::endl; // Negative zero
	ScalarConverter::convert("-0");
	std::cout << std::endl;

	return (0);
}
