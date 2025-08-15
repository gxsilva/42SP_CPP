/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:43:11 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 19:06:43 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: Please provide a single argument with the RPN expression." << std::endl;
		return (1);
	}
	
	try
	{
		RPN	rpn;
		std::cout << rpn.calc(argv[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	
	return (0);
}
