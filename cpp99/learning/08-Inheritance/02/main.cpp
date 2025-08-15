/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:57:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/27 21:01:56 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public:
		~Base () { std::cout << "Base Destructor" << std::endl; }
};

class Derived : public Base
{
	public:
		~Derived () { std::cout << "Derived Destructor" << std::endl; }
};

int main(void)
{
	//this type of mutreta is called "Upcasting"
	Base* juninho = new Derived();

	delete juninho;

	return (0);
}