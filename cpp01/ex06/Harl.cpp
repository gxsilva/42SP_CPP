/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:44:56 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 20:56:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) { return ; }
Harl::~Harl( void ) { return ; }

void Harl::debug( void )
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" ;
}

void Harl::info( void )
{
	std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
	std::string	levelString[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*call[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};


	switch (level[0])
	{
	case 'D':
		if (level.compare(levelString[0]) != 0)
			break;
		for (int i = 0; i < 1; i++)
		{
			(this->*call[i])();
		}
	break;
	case 'I':
		if (level.compare(levelString[1]) != 0)
			break;
		for (int i = 0; i < 2; i++)
		{
			(this->*call[i])();
		}
	break;
	case 'W':
		if (level.compare(levelString[2]) != 0)
			break;
		for (int i = 0; i < 3; i++)
		{
			(this->*call[i])();
		}
	break;
	case 'E':
		if (level.compare(levelString[3]) != 0)
			break;
		for (int i = 0; i < 4; i++)
		{
			(this->*call[i])();
		}
	break;
	default:
		break;
	}
	
}
