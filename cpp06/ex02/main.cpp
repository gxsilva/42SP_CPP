/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:47:14 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 16:10:58 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

int main()
{
	Base *ptrObj  = generate();
	Base  &obj = *ptrObj;

	std::cout << "Base type ptr" << std::endl;
	identify(ptrObj);
	std::cout << "Base type ptr" << std::endl;
	identify(obj);
	
	delete (ptrObj);
	return (0);
}
