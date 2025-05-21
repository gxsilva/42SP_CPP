/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:02:28 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 16:29:32 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) { return ; }
Zombie::~Zombie( void ) { std::cout << this->name << " deallocated\n"; };

void Zombie::announce( void ) { std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n"; }

void Zombie::setName(std::string name) { this->name = name; }
