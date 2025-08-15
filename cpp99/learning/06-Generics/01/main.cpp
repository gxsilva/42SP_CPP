/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:29:52 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 13:51:26 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "main.hpp"


int main(void)
{
	AccountBank<int> bank01;

	// Calls the non-template overload if X can be deduced from the argument type exactly.
	bank01.setAmount(100); // If 100 is of type X (int), calls void setAmount(X value);

	// To force the template version, use a type different from X or explicitly specify the template parameter:
	bank01.setAmount<double>(100.5); // Calls the template version with Y = double

	// If you want to call the template version with the same type as X, you can explicitly specify:
	bank01.setAmount<int>(200); // Calls the template version with Y = int

}