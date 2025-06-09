/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:38:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/09 16:02:34 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);

	FragTrap(int opt);
	FragTrap(std::string name, int opt);

	FragTrap(const FragTrap& fragTrap);
	FragTrap& operator=(const FragTrap& fragTrap);

	virtual ~FragTrap(void);

	void highFivesGuys(void) const;
	void attack(const std::string& target);
};
#endif // FRAGTRAP_HPP