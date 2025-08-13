/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 02:21:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 03:07:49 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char *ElementNotFoundException::what() const throw()
{
	return ("Search failed: element not found.");
}

//dependent type name
template <typename T> //because T is a container (std::vector<int>::const_iterator)
typename T::const_iterator easyfind(const T &haystack, int needle)
{
	typename T::const_iterator it = std::find(haystack.begin(), haystack.end(), needle);
	//print it in not found will display 0, but compare with the end of haystack make more sense to verify if it find or not
	if (it == haystack.end())
		throw ElementNotFoundException();
	return it;
}

/*
const_iterator -> nested type
presente em vários containers STL, é um iterator que permite percorrer um container
porem somente para leitura, não altera nada no container

::iteraotr -> já permite ler e modificar

std:: -> namespace
::vector<T> -> template class
::const_iterator -> nest member of vector template class
*/