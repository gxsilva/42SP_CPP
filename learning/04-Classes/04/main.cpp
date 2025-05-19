/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:42:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 15:22:30 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Person.hpp"

int main(void)
{
	Person	p1("Mario", 35);
	Person	p2("Luigi", 42);

	std::cout << Person::getPersonCnt() << " was created\n";
}