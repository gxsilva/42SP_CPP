/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:38:35 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 18:48:18 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public:
		Base() { return; }
		~Base() {return; }

		virtual void func (void) {std::cout << "func base" << std::endl; }
		void another (void) {std::cout << "another base" << std::endl; }
};

class Derived : public Base
{
	public:
		Derived() { return ; };
		~Derived() { return ; };

		void func (void) {std::cout << "func DERIVED" << std::endl; }
		void another (void) {std::cout << "another DERIVED" << std::endl; }
};

int main(int argc, const char *argv[])
{
	Derived obj;
	Derived* obj2 = new Derived();
	Base* obj3 = obj2; //upcasting

	obj.another();
	obj.func();

	obj2->another();
	obj2->func();

	obj3->another();
	obj3->func();
	return (0);
}