/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 15:26:40 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Alice");
	ClapTrap b("Bob");

	std::cout << "-------------Before------------" << std::endl;
	std::cout << "Name:\t\t\t " << a.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << a.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << a.getHitPoints() << std::endl;


	std::cout << "\nName:\t\t\t " << b.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << b.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << b.getHitPoints() << std::endl;
	std::cout << "---------------------------------" << std::endl;
	
	a.attack("Bob");
	b.takeDamage(0);

	b.attack("Alice");
	a.takeDamage(10);
	a.takeDamage(10);
	a.takeDamage(20);

	a.beRepaired(5);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.beRepaired(3);
	b.takeDamage(100);
	b.beRepaired(3);
	b.beRepaired(3);

	std::cout << "-------------After------------" << std::endl;
	std::cout << "Name:\t\t\t " << a.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << a.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << a.getHitPoints() << std::endl;


	std::cout << "\nName:\t\t\t " << b.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << b.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << b.getHitPoints() << std::endl;
	std::cout << "---------------------------------" << std::endl;


	return 0;
}
