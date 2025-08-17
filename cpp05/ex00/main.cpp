/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:22:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:42:30 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void testValidBureaucrat()
{
	try
	{
		Bureaucrat A("Alice", 50);
		std::cout << A << std::endl;
		A.gradeIncrease();
		std::cout << "After grade increase: " << A << std::endl;
		A.gradeDecrease();
		std::cout << "After grade decrease: " << A << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testInvalidGradeTooHigh()
{
	try
	{
		Bureaucrat B("Bob", 0);
		std::cout << B << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
}

void testInvalidGradeTooLow()
{
	try
	{
		Bureaucrat C("Charlie", 151);
		std::cout << C << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
}

void testBoundaryConditions()
{
	try
	{
		Bureaucrat D("Dave", 1);
		std::cout << D << std::endl;
		D.gradeIncrease(); // Should throw an exception
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat E("Eve", 150);
		std::cout << E << std::endl;
		E.gradeDecrease(); // Should throw an exception
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "Testing valid Bureaucrat:" << std::endl;
	testValidBureaucrat();

	std::cout << "\nTesting invalid grade (too high):" << std::endl;
	testInvalidGradeTooHigh();

	std::cout << "\nTesting invalid grade (too low):" << std::endl;
	testInvalidGradeTooLow();

	std::cout << "\nTesting boundary conditions:" << std::endl;
	testBoundaryConditions();

	return 0;
}
