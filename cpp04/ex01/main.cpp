/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:17:45 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 18:39:17 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define NBR_ANIMALS 4

int main(void) {
	{
		std::cout << "-------Subject test----------" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << std::endl;
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		std::cout << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		std::cout << std::endl;
		delete j; // should not create a leak
		delete i;
	}
	std::cout << "----------------My tests--------------" << std::endl;
	{
		const Animal *i = new Dog();
		const Animal *j = new Cat();
		const Animal *zoo[NBR_ANIMALS];
		std::cout << std::endl;

		std::cout << "------------------- FILL ZOO -------------------" << std::endl;
		for (size_t i = 0; i < 2; i += 1) {
			zoo[i] = new Dog();
			std::cout << std::endl;
		}
		for (size_t i = 2; i < 4; i += 1) {
			zoo[i] = new Cat();
			std::cout << std::endl;
		}
		std::cout << "---------------- DELETE ZOO ---------------" << std::endl;
		for (size_t i = 0; i < NBR_ANIMALS; i += 1) {
			delete zoo[i];
		}
		std::cout << "--------------- ZOO DELETED ---------------" << std::endl;
		std::cout << std::endl;

		delete i;
		delete j;
	}
	return 0;
}