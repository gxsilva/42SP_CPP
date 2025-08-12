/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:48:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 16:10:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

static int generateRng (void)
{
	std::srand(static_cast<unsigned>(std::time(NULL)));
	return (std::rand() % 3);
}

Base * generate(void)
{
	int		rng = generateRng();
	
	if (rng == 0)
		return (new A);
	else if(rng == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type A" << std::endl;
	else if(dynamic_cast<B *>(p))
		std::cout << "Type B" << std::endl;
	else if(dynamic_cast<C *>(p))
		std::cout << "Type C" << std::endl;
	else
		std::cout << "Undefined Type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Type A" << std::endl;
	}
	catch (std::exception &e) { }

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Type B" << std::endl;
	}
	catch (std::exception &e) { }

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Type C" << std::endl;
	}
	catch (std::exception &e) { }
}