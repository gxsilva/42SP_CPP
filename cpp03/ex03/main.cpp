/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/06 15:35:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include "DiamondTrap.hpp"
#include <iostream>

int main(void) {
//   {
//     ClapTrap Marcolino("Marcolino");
//     ScavTrap Patolino("Patolino");
//     FragTrap Juninho("Juninho");

//     for (unsigned int i = 0; i < 5; i++) {
//       Marcolino.attack(Patolino.getName());
//       Patolino.takeDamage(Marcolino.getAttackDamage());
//       Patolino.attack(Marcolino.getName());
//       Juninho.attack(Patolino.getName());
//       Patolino.takeDamage(Juninho.getAttackDamage());
//       Marcolino.takeDamage(Patolino.getAttackDamage());
//       Marcolino.beRepaired(i);
//       if (!Marcolino.getHitPoints() || !Patolino.getHitPoints())
//         break;
//     }
//   }
  {
    std::cout << "\nTestes especificos: \n" << std::endl;
    {
      DiamondTrap Teteu("Teteu");

	  std::cout << "TETEU outside name:\t: " <<  Teteu.getName() << std::endl; 
      std::cout << "TETEU Hit Points(must be 100):\t" << Teteu.getHitPoints() << std::endl;
      std::cout << "TETEU Energy Points(must be 50):\t" << Teteu.getEnergyPoints() << std::endl;
      std::cout << "TETEU Attack Points:\t" << Teteu.getAttackDamage() << std::endl;
      Teteu.attack("You again");

	  std::cout << std::endl;
	  std::cout << std::endl;
      std::cout << Teteu.getName() << std::endl;
      Teteu.attack("You");
      Teteu.attack("");
      Teteu.takeDamage(-1);
      Teteu.beRepaired(-1);

      std::cout << std::endl;
      std::cout << "Health Points tests" << std::endl;

      std::cout << "Health Points tests" << std::endl;

      Teteu.takeDamage(1);
      Teteu.beRepaired(2);
      Teteu.takeDamage(11);
      Teteu.takeDamage(1);

      std::cout << std::endl;
      std::cout << "Energy tests" << std::endl;

      /* setuping for energy tests */
      Teteu.setEnergyPoints(0);
      Teteu.setHitPoints(10);

      Teteu.beRepaired(1);
      Teteu.attack("A ghost");
	  std::cout << "\nTestes de metodos especiais:\n" << std::endl;
      Teteu.guardGate();
      Teteu.highFivesGuys();
      Teteu.whoAmI();
      std::cout << std::endl;
    }
  }
  return (0);
}