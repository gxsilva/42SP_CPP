/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:02:06 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 20:05:05 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int		x;

	cout << "Type a value 0 and 10: ";
	cin >> x;

	switch (x)
	{
	case 2:
		cout << "Number 2";
	break;
	case 3:
		cout << "Number 3";
	break;
	default:
		cout << "other number";
		break;
	}
	cout << "\n";
	return (0);
}