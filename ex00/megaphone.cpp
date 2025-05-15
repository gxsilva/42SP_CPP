/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:08:32 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 14:46:24 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void	toUpperCase(std::string *str)
{
	std::string		&input = *str;
	int				i = -1;
	
	while (input[++i])
		input[i] = std::toupper(input[i]);
}

int main(int argc, char **argv)
{
	std::string	text;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			text = argv[i];
			toUpperCase(&text);
			std::cout << text;
			if ((i + 1) < argc)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}