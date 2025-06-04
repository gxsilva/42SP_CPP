/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:47:47 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/06/03 19:15:43 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>

class Base {
	public:
		Base() { std::cout << "Base constructor" << std::endl; }
		virtual ~Base() { std::cout << "Base destructor" << std::endl; }
	};
	
	class Derived : public Base {
	public:
		Derived() { std::cout << "Derived constructor" << std::endl; }
		~Derived() { std::cout << "Derived destructor" << std::endl; }
	};
	
	int main() {
		Base* ptr = new Derived();
		delete ptr;
		return 0;
	}