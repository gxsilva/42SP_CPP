/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:35:48 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 15:59:30 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) { this->name = name; }
Zombie::~Zombie( void ) { std::cout << this->name << " deallocated\n"; };

void Zombie::announce( void ) { std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n"; }

