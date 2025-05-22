/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:50:51 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 20:51:14 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

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