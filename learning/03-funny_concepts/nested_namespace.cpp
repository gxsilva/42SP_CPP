/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested_namespace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:41:33 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 21:45:19 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

namespace lsilva
{
	namespace functions
	{
		void sayHello(void)
		{
			std::cout << "Hello";
		}
	}
	void	sayBye(void)
	{
		std::cout << "bye";
	}
}

int main(void)
{
	lsilva::sayBye();
	lsilva::functions::sayHello();
}