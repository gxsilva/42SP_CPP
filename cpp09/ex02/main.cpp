/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:10:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 20:17:43 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc < 2)
	{
		std::cout << "Error: Not enough numbers to use algorithm" << std::endl;
		return (1);
	}
	try
	{
		PmergeMe	pm;
		pm.fetchInput(argc, argv);
		pm.sortVector();
		pm.sortDeque();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);
}