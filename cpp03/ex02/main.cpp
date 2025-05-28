/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/28 16:16:51 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("Klebinho");
	ScavTrap scav("Marcolino");
	FragTrap frag("Zezinho");

	std::cout << "\n--- ClapTrap Actions ---\n";
	clap.attack("target1");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.attack("target2");
	clap.takeDamage(20); // test death
	clap.beRepaired(10); // should not repair if dead
	clap.attack("target3"); // should not attack if dead

	std::cout << "\n--- ScavTrap Actions ---\n";
	scav.attack("target2");
	scav.takeDamage(7);
	scav.beRepaired(4);
	scav.guardGate();
	scav.attack("target2");
	scav.takeDamage(50); // test death
	scav.guardGate(); // should not guard if dead
	scav.beRepaired(10); // should not repair if dead

	std::cout << "\n--- FragTrap Actions ---\n";
	frag.attack("target3");
	frag.takeDamage(10);
	frag.beRepaired(5);
	frag.highFivesGuys();
	frag.attack("target4");
	frag.takeDamage(90); // test death
	frag.highFivesGuys(); // should not high five if dead
	frag.beRepaired(10); // should not repair if dead

	std::cout << "\n--- Multiple Interactions ---\n";
	FragTrap frag2("Joaozinho");
	frag2.attack("Marcolino");
	scav.takeDamage(30);
	scav.beRepaired(2);
	frag2.highFivesGuys();
	frag2.takeDamage(100); // kill frag2
	frag2.attack("target5"); // should not attack if dead

	std::cout << "\n--- End of Test ---\n";
	return 0;
}
