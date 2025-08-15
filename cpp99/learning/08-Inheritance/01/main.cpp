/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:02:23 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/27 20:09:10 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERIC_HPP
#define GENERIC_HPP

#include <iostream>

class Generic
{
	public:
		Generic(void) { return; };
		~Generic() { return; };
		void func() {std::cout << "Hello"; }
};

class A : public Generic
{
	public:
		A(void) { return; };
		~A() { return; };
};

class B : public Generic
{
	public:
		B(void) { return; };
		~B() { return; };
};

class C : public A, public B
{
	public:
		C(void) { return; };
		~C() { return; };
};

/*Both A and B share the inheritance of "func()" from "Generic" class but now "C"
has two instance of the same function*/

#endif // GENERIC_HPP

int main(void)
{
	C *Cube = new C();


	/*
	The compiler define it as "ambiguoues behavior because the "func" exist
	in more than one instance;
	 */
	Cube->func();
	return (0);
}