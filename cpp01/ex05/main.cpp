/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:14:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 20:40:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
	Harl		mainHarl;
	std::string	level;

	std::cout << "type a level: <DEBUG> | <INFO> | <WARNING> | <ERROR>\n";
	std::cout << "> " ;
	std::cin >> level;

	mainHarl.complain(level);
	return (0);
}