/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:11:00 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 17:22:14 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int		x = 10, y = 15, z = 5;
	int		a, b, c;
	string	withOutNameSpace = "hello";

	//using and E and a N value make the number being in their power of N
	double	l = 2E2;

	a = b = c = 10;

	cout << "string define without namespace begin used" << withOutNameSpace << endl;
	cout << "power of 10: " << l << endl;

	cout << "Multiple declarations(sum): " << x + y + z << endl;
	cout << "Multiple declarations(sum): " << x - y - z << endl; //it handle with negatives
	
	cout << "Multiple declarations(sum): " << a + b + c << endl;
	cout << "Multiple declarations(sum): " << a - b - c << endl;

	return (0);
}

