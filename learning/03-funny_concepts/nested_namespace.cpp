/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested_namespace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:41:33 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 22:22:16 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace lsilva
{
	namespace functions
	{
		void sayHello(void)
		{
			std::cout << "Hello" << "\n";
		}
	}
	void	sayBye(void)
	{
		std::cout << "bye" << "\n";
	}
}

/*
this function are not operator overloading,
the namespace ensure a separete scope for 
the "same" name funcion
*/

void	sayBye(void)
{
	std::cout << "A global bye" << "\n";
}

int main(void)
{
	lsilva::sayBye();
	lsilva::functions::sayHello();

	sayBye();
	return (0);
}