/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:48:51 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 01:37:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

#ifndef DEBUG
# define DEBUG 0
#endif

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		//OCCF
		Array(void);
		Array(unsigned int n);
		Array(const Array &a);
		Array &operator=(const Array &a);
		~Array(void);

		//GETTER
		unsigned int size(void) const;

		//EXCEPTION
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		//OVERLOADING
		T &operator[](unsigned int n);
		const T &operator[](unsigned int n) const; //const instances cannot be modify
};

#include "Array.tpp"

#endif /* ARRAY_HPP */