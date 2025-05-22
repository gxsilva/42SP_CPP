/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:07:57 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 17:23:15 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(void) const { return this->type; }
void Weapon::setType(std::string newType) { this->type = newType; }

Weapon::Weapon(std::string weaponName) { this->type = weaponName; }