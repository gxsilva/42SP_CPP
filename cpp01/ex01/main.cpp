/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:02:32 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 16:32:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	int n = 5;
	Zombie* horde = zombieHorde(n, "Enzo");
	if (horde)
	{
		for (int i = 0; i < n; ++i)
			horde[i].announce();
		delete[] horde;
	}
	else
		std::cerr << "Failed to create zombie horde." << std::endl;
	return 0;
}