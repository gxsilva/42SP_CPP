/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:11:52 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 17:23:59 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "iter.hpp"

void printElement(int elem) {
	std::cout << elem << " ";
}

void printStr(const std::string elem) {
	std::cout << elem << " ";
}

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"

int main(void)
{
	int arr[] = {1, 2, 3, 4};
	std::cout << RED << "Int array: " << RESET;
	iter(arr, 4, printElement);
	std::cout << std::endl;

	std::string strArr[] = {"hello", "world", "cpp"};
	size_t strArrLen = sizeof(strArr) / sizeof(strArr[0]);
	std::cout << GREEN << "String array: " << RESET;
	iter(strArr, strArrLen, printStr);
	std::cout << std::endl;

	double dblArr[] = {1.1, 2.2, 3.3};
	size_t dblArrLen = sizeof(dblArr) / sizeof(dblArr[0]);
	std::cout << CYAN << "Double array: " << RESET;
	iter(dblArr, dblArrLen, printElement);
	std::cout << std::endl;

	return 0;
}
