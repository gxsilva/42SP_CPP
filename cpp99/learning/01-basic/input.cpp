/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:20:41 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 22:28:49 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(int argc, char **argv)
{
	string	BankAccountNumbers;
	
	cout << "Type your's bank account number: ";
	//see in = getstr in C
	cin >> BankAccountNumbers;
	cout << BankAccountNumbers << " Was typed\n";
	cout << "Type another random stuff: ";
	return (0);
}