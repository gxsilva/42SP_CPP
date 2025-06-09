/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 01:38:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 16:09:11 by lsilva-x         ###   ########.fr       */
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

  DiamondTrap teteu("Teteu");

  std::cout << "-------------Before------------" << std::endl;
  std::cout << "Name:\t\t\t " << teteu.getName() << std::endl;
  std::cout << "Energy_Points:\t\t " << teteu.getEnergyPoints() << std::endl;
  std::cout << "Life Points(hitPts):\t " << teteu.getHitPoints() << std::endl;
  std::cout << "-------------------------" << std::endl;
  std::cout << "TETEU outside name:\t\t\t" <<  teteu.getName() << std::endl; 
  std::cout << "TETEU Hit Points(must be 100):\t\t" << teteu.getHitPoints() << std::endl;
  std::cout << "TETEU Energy Points(must be 50):\t" << teteu.getEnergyPoints() << std::endl;
  std::cout << "TETEU Attack Points(must be 30):\t\t" << teteu.getAttackDamage() << std::endl;
  std::cout << "------Special Function--------" << std::endl;
  teteu.whoAmI();
  std::cout << "-------------------------" << std::endl;
  teteu.attack("You");
  teteu.attack("You");
  teteu.attack("");
  std::cout << "-------------Negative values teste------------" << std::endl;
  teteu.takeDamage(-1);
  teteu.beRepaired(-1);
  std::cout << "---------Guard Gate mode teste--------" << std::endl;
  teteu.guardGate();
  teteu.takeDamage(1);
  teteu.beRepaired(2);
  teteu.guardGate();
  std::cout << "---------Multiple testes--------" << std::endl;
  teteu.takeDamage(1);
  teteu.beRepaired(2);
  teteu.takeDamage(11);
  teteu.takeDamage(1);
  std::cout << "---------Energy pts testes--------" << std::endl;
  teteu.setEnergyPoints(0);
  teteu.setHitPoints(10);
  teteu.beRepaired(1);
  teteu.attack("A ghost");
  teteu.guardGate();
  std::cout << "----------Dead teste---------" << std::endl;
  teteu.takeDamage(900);
  teteu.guardGate();
  teteu.takeDamage(1);
  teteu.beRepaired(2);
  teteu.highFivesGuys();
  teteu.whoAmI();
  std::cout << "-------------------------" << std::endl;
  }
  return (0);
}