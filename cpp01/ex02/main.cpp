/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:49:12 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 16:54:44 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string mainStr = "HI THIS IS BRAIN";
	std::string *stringPTR = &mainStr;
	std::string &stringREF = mainStr;

	std::cout << "memory address of the string variable:\t"<<  &mainStr << std::endl;
	std::cout << "memory address held by stringPTR:\t"<<  stringPTR << std::endl;
	std::cout << "memory address held by stringREF:\t"<<  &stringREF << std::endl;

	std::cout << "-----------------------------------\n";

	std::cout << "value of the string variable:\t" << mainStr << std::endl;
	std::cout << "value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF:\t" << stringREF << std::endl;
	
	return (0);
}