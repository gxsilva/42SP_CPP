/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:54:48 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 16:40:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "main.hpp"

int main(void)
{
	Dog		myDog;

	myDog.name = "Robson";
	std::cout << "Dog name: " << myDog.name << "\n";
	myDog.setAge(45);
	std::cout << "Dog age: " << myDog.getAge() << "\n";
	myDog.Bark();
	myDog.Bark();
	myDog.Bark();
	return (0);
}