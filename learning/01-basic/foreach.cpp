/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foreach.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:11:54 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 20:47:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int		int_arr[] = {5, 7, 8 ,9 ,1};

	//foreach loops are only using in the c++11
	for (int i : int_arr)
		cout << i << "\n";
	return (0);
}