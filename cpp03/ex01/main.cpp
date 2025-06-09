/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 15:33:19 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Klebinho");
	ScavTrap scav("Marcolino");

	std::cout << "-------------Before------------" << std::endl;
	std::cout << "Name:\t\t\t " << clap.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << clap.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << clap.getHitPoints() << std::endl;


	std::cout << "\nName:\t\t\t " << scav.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << scav.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << scav.getHitPoints() << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::cout << "\n--- ClapTrap Actions ---\n";
	clap.attack("target1");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "\n--- ScavTrap Actions ---\n";
	scav.attack("target2");
	clap.attack("target2");
	clap.attack("target2");

	std::cout << "\n--- Multiple ScavTrap Actions ---\n";
	scav.takeDamage(7);
	scav.takeDamage(7);
	scav.beRepaired(4);



	std::cout << "\n--- MFFFFFFFFFFFF ---\n";

	scav.attack("target2");
	scav.guardGate();
	scav.attack("target2");
	scav.takeDamage(7);
	scav.takeDamage(700);
	scav.beRepaired(20);
	scav.guardGate();
	scav.takeDamage(7);
	scav.attack("target2");

	std::cout << "-------------After------------" << std::endl;
	std::cout << "Name:\t\t\t " << clap.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << clap.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << clap.getHitPoints() << std::endl;


	std::cout << "\nName:\t\t\t " << scav.getName() << std::endl;
	std::cout << "Energy_Points:\t\t " << scav.getEnergyPoints() << std::endl;
	std::cout << "Life Points(hitPts):\t " << scav.getHitPoints() << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::cout << "\n--- End of Test ---\n";
	return 0;
}
