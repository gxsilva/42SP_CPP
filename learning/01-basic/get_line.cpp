/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:04:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 19:08:09 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(void)
{
	string	name;

	/*
	this function only take the first segmente of string
	John Doe -> cout << string = John
	cout << "Type our name:";
	cin >> name;
	cout << name << "\n";
	*/
	cout << "Type our full name: ";
	getline(cin, name);
	cout << "Full name: " << name << "\n";
}