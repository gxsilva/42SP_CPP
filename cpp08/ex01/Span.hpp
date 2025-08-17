/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:35:48 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:47:02 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

#ifndef DEBUG
# define DEBUG 0
#endif

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int		_size;
		
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span &s);
		Span &operator=(const Span &s);
		~Span();

		void addNumber(int n);

		template <typename T>
		void addNumber(T begin, T end)
		{
			for (T it = begin; it != end; it++)
			{
				if (_array.size() >= _size)
					throw (SpanArrayFull());
				_array.push_back(*it);
			}
		}

		int shortestSpan(void) const;
		int longestSpan(void) const;
		
		class SpanArrayFull : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class SpanArrayInvalidAmountElements : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif // SPAN_HPP
