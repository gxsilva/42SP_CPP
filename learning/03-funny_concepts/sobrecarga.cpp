/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sobrecarga.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:30:53 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 22:14:59 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio> //stdio.h

using namespace std;

/*
Opeator overloading is make multiple definition of the same
function, depends of the input type the function call it correct
instance.
*/

void	my_print(char const *str)
{
	printf("string: %s\n", str);
}

void	my_print(int nbr)
{
	printf("int: %d\n", nbr);
}

void	my_print(char letter)
{
	printf("single char: %c\n", letter);
}

//set a standard value it has not been passed
void	stdValue(int b, int i = 10)
{
	cout << "value " << b << "\n";
	cout << "value " << i << "\n";
}

int main(void)
{
	my_print(45);
	my_print("hello world");
	my_print('a');
	stdValue(5);
	stdValue(20, 15);
	
	return (0);
}