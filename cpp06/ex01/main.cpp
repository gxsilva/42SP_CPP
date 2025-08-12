/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 02:41:49 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 03:07:55 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	Data *obj1 = new Data("Reg (from \'made in abyss\')", 17);

	std::cout << "\033[1;34m-------- Object ---------\033[0m" << std::endl;
	std::cout << "\033[1;32m[Name]:\033[0m            " << obj1->getName() << std::endl;
	std::cout << "\033[1;32m[Age]:\033[0m             " << obj1->getAge() << std::endl;
	std::cout << "\033[1;32m[Pointer]:\033[0m         " << obj1 << std::endl;

	std::cout << "\033[1;34m-------- Serialized Pointer ---------\033[0m" << std::endl;
	uintptr_t serializedPtr = Serializer::serialize(obj1);
	std::cout << "\033[1;32m[Serialized Ptr]:\033[0m  " << serializedPtr << std::endl;

	std::cout << "\033[1;34m-------- Deserialized Pointer ---------\033[0m" << std::endl;
	Data *deserializedPtr = Serializer::deserialize(serializedPtr);
	std::cout << "\033[1;32m[Name]:\033[0m            " << deserializedPtr->getName() << std::endl;
	std::cout << "\033[1;32m[Age]:\033[0m             " << deserializedPtr->getAge() << std::endl;
	std::cout << "\033[1;32m[Pointer Address]:\033[0m " << &deserializedPtr << std::endl;
	std::cout << "\033[1;32m[Pointer Value]:\033[0m   " << deserializedPtr << std::endl;

	delete obj1;
	return 0;
}
