/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 02:21:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:46:44 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char *ElementNotFoundException::what() const throw()
{
	return ("Search failed: element not found.");
}

template <typename T> //because T is a container (std::vector<int>::const_iterator)
typename T::const_iterator easyfind(const T &haystack, int needle)
{
	typename T::const_iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw ElementNotFoundException();
	return it;
}
