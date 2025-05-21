/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:37:29 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 15:58:45 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	std::string		zombieName;

	do
	{
		std::cout << "(Heap)| Zombie Permanent name: ";
		getline(std::cin, zombieName);
		if (!zombieName.empty())
			break;
		std::cout << "(Heap)| Zombie name cannot be blank\n";
	} while (true);

	Zombie*	permanentZombie = newZombie(zombieName);
	permanentZombie->announce();

	std::cout << "(Stack)| Zombies Chump name: ";
	getline(std::cin, zombieName);
	for (int i = 0; i < 3; i++)
		randomChump(zombieName);
		
	delete(permanentZombie);
	return (0);
}