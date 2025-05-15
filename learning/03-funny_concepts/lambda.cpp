/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lambda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:01:23 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 12:53:01 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <functional>

using namespace std;
/*
	Lambda
	
	The lambda is an function define directly in scope function, is common
	used as an argument to another function

	[capture](parameters) -> return_type { function }

	[capture] -> capture variable from the surrounding scope
	(parameters) -> like a regular function
	-> return_type (optional) -> return type of the lambda
	{ body } the code to exucte.
*/

//Global lambda
auto sub = [](int x, int y){return(x - y);};


//A way to define the type of lambda return is using an arrow
auto mult = [](int x, int y) -> int {return(x * y);};

std::string tmpObjc(void) { return ("Hello World"); };

int		do_something(int x, int y)
{
	cout << "sum " << x << " and " << y << "\n";
	//Normal Lambda
	auto sum = [x, y](){return x + y;};
	return (sum());
}

int main(void)
{

	/*std::function<int(int x, int y)>  */
	std::function<int(int x, int y)> func = do_something;
	do_something(5, 8);
	return (0);
}