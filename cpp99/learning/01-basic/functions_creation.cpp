/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_creation.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:47:50 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 12:59:30 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <functional>

/*
	Has a several way to define a function in CPP and a several way
	to manipulate the functions.
*/

//Classic
int		add(int x, int y)
{
	return (x + y);
}
/*
it also can be written in a single line

int add(int x, int y) {return (x + y);};
*/

//Lambda functions

//Global lambda
auto	sub = [](int x, int y) -> int { return (x - y);};

int main(int argc, char **argv)
{
	//A variable that hold an function
	std::function<int(int x, int y)> add_var = add;
	int (*add_var2)(int, int) = add;
	std::cout << "result: " << add_var2(15, 15) << "\n";
	return (0);
}