/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 01:18:50 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/30 01:20:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
T max(T a, T b)
{
	if (a > b) return a;
	return b;
}

int main(int argc, char const *argv[])
{
	std::cout << max(10, 5) << std::endl;
	return 0;
}
