/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:48:46 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 01:48:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
	try {
		std::cout << "===== Empty constructor =====" << std::endl;
		Array<int> a1;
		std::cout << "size: " << a1.size() << std::endl;

		std::cout << "\n===== Valid constructor =====" << std::endl;
		Array<int> a2(5);
		std::cout << "size: " << a2.size() << std::endl;
		for (unsigned int i = 0; i < a2.size(); i++)
			std::cout << "a2[" << i << "] = " << a2[i] << std::endl;

		std::cout << "\n===== Modify elements values =====" << std::endl;
		for (unsigned int i = 0; i < a2.size(); i++)
			a2[i] = i * 10;
		std::cout << "Print modify elements" << std::endl;
		for (unsigned int i = 0; i < a2.size(); i++)
			std::cout << "a2[" << i << "] = " << a2[i] << std::endl;

		std::cout << "\n===== Copy constructor =====" << std::endl;
		Array<int> a3(a2);
		a3[0] = 999;
		std::cout << "a2[0] = " << a2[0] << " (original)" << std::endl;
		std::cout << "a3[0] = " << a3[0] << " (modify copy)" << std::endl;

		std::cout << "\n===== Assign operator =====" << std::endl;
		Array<int> a4;
		a4 = a2;
		a4[1] = 777;
		std::cout << "a2[1] = " << a2[1] << " (original)" << std::endl;
		std::cout << "a4[1] = " << a4[1] << " (modify copy)" << std::endl;

		std::cout << "\n===== String type =====" << std::endl;
		Array<std::string> a5(3);
		a5[0] = "Reg";
		a5[1] = "from";
		a5[2] = "Made in abyss";
		for (unsigned int i = 0; i < a5.size(); i++)
			std::cout << "a5[" << i << "] = " << a5[i] << std::endl;

		std::cout << "\n===== Exception test (invalid position) =====" << std::endl;
		std::cout << a2[999] << std::endl; // Deve lançar exceção

	} catch (const std::exception &e) {
		std::cout << "Excpetion message: " << e.what() << std::endl;
	}

	std::cout << "\n===== Boundarie case =====" << std::endl;
	Array<std::string> a6(3);
	a6[0] = "Reg";
	a6[1] = "from";
	a6[2] = "Made in abyss";

	std::cout << "Array size: " << a6.size() << std::endl;
	try
	{
		std::cout << "array[0]: " << std::endl;
		std::cout << a6[0] << std::endl;
		
		std::cout << "array[1]: " << std::endl;
		std::cout << a6[1] << std::endl;

		std::cout << "array[2]: " << std::endl;
		std::cout << a6[2] << std::endl;

		std::cout << "array[3]: " << std::endl;
		std::cout << a6[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
