/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:33:52 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/14 17:01:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//input output stream -> stdio.h
#include <iostream> //where is the .h? :(

// using namespace std;

int main(int argc, char **argv)
{
	//"see out = cout = object"
	std::cout << "Hello World\n";

	//print number is without quotues
	std::cout << 35 << "\n";

	//and do operation
	std::cout << 10 + 10 << "\n";
	std::cout << (100 / 10) * 3 << "\n"; //wtf?

	//concat multiple string (and also types)
	std::cout << "Hi, i'have " << 20 << " years old\n";

	//a diferent way to make a break line in c is using endl
	std::cout << "this break line is strange" << std::endl; //if ! using namespace

	return (0);
}

/*
#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "hello world"
	-> omitting the namespace, use it directly
}
*/
