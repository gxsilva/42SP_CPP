/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtualDestructor.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:05:17 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/29 19:18:13 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
public:
	std::string* strptr;
	
	Base () 
	{
		strptr = new std::string;
	}
	virtual ~Base() { 
		delete(this->strptr);
		std::cout << "Base destructor\n"; }
};

class Derived :  public Base {
public:
	~Derived() { std::cout << "Derived destructor\n"; }
};

int main() {
	Base* obj = new Derived();
	delete obj;
}
	