/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 01:05:59 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 02:04:18 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"


void test_assignment_operator()
{
	MutantStack<int> mstack;
	mstack.push(10);
	mstack.push(20);

	MutantStack<int> assigned;
	assigned = mstack;

	std::cout << "Elements in assigned stack:" << std::endl;
	for (MutantStack<int>::iterator it = assigned.begin(); it != assigned.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}

void test_basic_operations()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

}

void test_reverse_iterator()
{
	MutantStack<int> mstack;

	mstack.push(100);
	mstack.push(200);
	mstack.push(300);

	std::cout << "Elements in reverse order:" << std::endl;
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
	{
		std::cout << *rit << std::endl;
	}
}

int main(void)
{
	std::cout << "=== Test Basic Operations ===" << std::endl;
	test_basic_operations();

	std::cout << "\n=== Test Assignment Operator ===" << std::endl;
	test_assignment_operator();

	std::cout << "\n=== Test Reverse Iterator ===" << std::endl;
	test_reverse_iterator();

	return 0;
}
