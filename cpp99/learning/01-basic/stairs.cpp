/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stairs.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:05:43 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 20:09:49 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int		x = 0;
	int		y = 0;

	cout << "Stairs height(or heigth): ";
	cin >> x;
	
	while(x--)
	{
		y = x;
		while (y--)
			cout << "#";
		cout << "\n";
	}
	cout << "\n";
}
