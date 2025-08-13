/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 00:48:48 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 01:47:08 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//OCCF + TEMPLATES
template <typename T>
Array<T>::Array(void)
: _array(NULL), _size(0)
{
	if (DEBUG)
		std::cout << "[Array]: Default constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n)
: _array(NULL), _size(n)
{
	if (DEBUG)
		std::cout << "[Array]: Parameterized constructor called" << std::endl;
	if (n == 0)
		_array = NULL;
	else
		_array = new T[n];
	return ;
}

//Correctly handle the case where the a._size is 0
template <typename T>
Array<T>::Array(const Array &a)
: _array(NULL), _size(a._size)
{
	if (DEBUG)
		std::cout << "[Array]: Copy constructor called" << std::endl;
	if (a._size > 0)
	{
		_array = new T[a._size];
		for (unsigned int i = 0; i < a._size; i++)
			_array[i] = a._array[i];
	}
	return ;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &a)
{
	if (DEBUG)
		std::cout << "[Array]: Copy constructor called" << std::endl;
	if (this != &a)
	{
		if (_size > 0)
		{
			delete[] _array;
			_array = NULL;
		}
		if (a._size > 0)
		{
			_array = new T[a._size];
			for (unsigned int i = 0; i < a._size; i++)
				_array[i] = a._array[i];
		}
		_size = a._size;
	}
	return (*this);
}

//delete[] automaticaly handle NULL array so is okay called like this
template <typename T>
Array<T>::~Array (void)
{
	delete[] _array;
	_array = NULL;
	return ;
}

/*
Esse exercicio é meio paia mas nada impede implementação de métodos
dentro do arquivo .tpp só não é convencional XD
*/
//METHODS
template <typename T>
unsigned int Array<T>::size(void) const { return (_size); }

//EXCEPTIONS
template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Error: Attempted to access an invalid position in the array.");
}

//OVERLOADING
template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw (Array<T>::OutOfBoundsException());
	else
		return (_array[n]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int n) const
{
	if (n >= _size)
		throw (Array<T>::OutOfBoundsException());
	else
		return (_array[n]);
}