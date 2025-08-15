/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 22:29:54 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/04 21:04:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
	Reference and Deference in CPP
	
	Reference (variable it self)
	References in C is an alias for an existing variable, it does not
	hold its own value but referes directly to the memory of another variable

	Deference (address of the variable)
	Access the value stored at the address a pointer holds, it's done using the *
	operator;

	+------+     +--------+
	|  a   |<--> |  ref   |   // same memory
	+------+     +--------+
		|
		v
		+----------+
		|   ptr    | ---> [address of a]
		+----------+

*/
int main(void)
{
	/*Reference*/
	int		x = 10;
	int&	x_ref = x;

	int		z = 35;
	int&	z_ref = z;

	int		y = 20;
	int*	y_def = &y;

	std::cout << "X straight value: " << x << "\n";
	std::cout << "X straight ptr value: " << &x << "\n";
	std::cout << "X value acessed from it reference: " << x_ref << "\n";
	
	std::cout << "\n\n";
	std::cout << "Z_ref ptr" << &z_ref << "\n";
	std::cout << "Z_ref val" << z_ref << "\n";
	z_ref = x;
	std::cout << "Z_ref ptr" << &z_ref << "\n"; // the same place in the memory but diffrente value
	std::cout << "Z_ref val" << z_ref << "\n";
	std::cout << "Z_ref val" << z << "\n";
	std::cout << "Z_ref ptr val" << &z << "\n";
	std::cout << "\n\n";
	

	std::cout << "Y straight value: " << y_def << "\n";
	std::cout << "Y acesses the ptr value: " << *y_def << "\n";
	std::cout << "Y value acessed from it reference: " << *y_def << "\n";
	return (0);
}