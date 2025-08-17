/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:35:46 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:46:54 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//---------------------OCCF-------------------
Span::Span(void)
: _array(), _size(0)
{
	if (DEBUG)
		std::cout << "[Span]: Default Constructor called" << std::endl;
}

Span::Span(unsigned int n)
: _array(), _size(n)
{
	if (DEBUG)
		std::cout << "[Span]: Default Constructor called" << std::endl;
}

Span::Span(const Span &s)
: _array(s._array), _size(s._size)
{
	if (DEBUG)
		std::cout << "[Span]: Copy Constructor called" << std::endl;
}

Span& Span::operator=(const Span &s)
{
	if (DEBUG)
		std::cout << "[Span]: Copy Constructor called" << std::endl;
	if (this != &s)
	{
		_array = s._array; //std::vector already handle assign copy, handles resizing and copying
		_size = s._size;
	}
	return (*this);
}

Span::~Span()
{
	if (DEBUG)
		std::cout << "[Span]: Default Destructor called" << std::endl;
	return ;
}

//---------------------METHODS-------------------
void Span::addNumber(int n)
{
	if (_array.size() >= _size)
		throw (SpanArrayFull());
	_array.push_back(n);
}

int Span::shortestSpan(void) const
{
	if(_array.size() < 2)
		throw (SpanArrayInvalidAmountElements());
	std::vector<int> sorted(_array);
	std::sort(sorted.begin(), sorted.end());
	int minorDistance = sorted[1] - sorted[0];
	for (size_t i = 2; i < sorted.size(); i++)
	{
		if ((sorted[i] - sorted[i - 1]) < minorDistance)
			minorDistance = sorted[i] - sorted[i - 1];
		continue;
	}
	return (minorDistance);
}

int Span::longestSpan(void) const
{
	int	min;
	int max;
	
	if(_array.size() < 2)
		throw (SpanArrayInvalidAmountElements());
	min = *std::min_element(_array.begin(), _array.end());
	max = *std::max_element(_array.begin(), _array.end());
	return (max - min);
}

//---------------------EXCEPTIONS-------------------
const char *Span::SpanArrayFull::what() const throw()
{
	return ("Error: Span array is already full of elements.");
}

const char *Span::SpanArrayInvalidAmountElements::what() const throw()
{
	return ("Error: Span array has a invalid amount arguments to this method.");
}