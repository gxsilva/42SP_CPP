/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 02:16:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:08:22 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> vec;
	vec.push_back(85);
	vec.push_back(5);
	vec.push_back(22);
	vec.push_back(12);
	vec.push_back(86);


	try {
		std::vector<int>::const_iterator it = easyfind(vec, 22);
		std::cout << "Found value: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::vector<int>::const_iterator it = easyfind(vec, 0);
		std::cout << "Found value: " << *it << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
