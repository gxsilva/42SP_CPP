/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:48:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 14:52:58 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
	Enums work a little bit different than C it look more than
	a namespace
*/

enum ColorsEnum
{
	White,
	Black,
	Purple,
	Red
};

ColorsEnum get_value(std::string color_str)
{
	if (color_str == "White")
		return ColorsEnum::White;
	else if (color_str == "Black")
		return ColorsEnum::Black;
	else if (color_str == "Purple")
		return ColorsEnum::Purple;
	else if (color_str == "Red")
		return ColorsEnum::Red;
	else
		throw std::invalid_argument("Invalid color string");
}

int main(void)
{
	std::string		input;

	std::cout << "Color: ";
	std::cin >> input;
	std::cout << "color type enum" << get_value(input) << "\n";
	
	return (0);
}