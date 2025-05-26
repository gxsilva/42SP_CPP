/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 18:19:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Alice");
	ClapTrap b("Bob");

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
	b.beRepaired(3);

	return 0;
}
