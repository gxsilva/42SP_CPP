/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 02:16:38 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/13 02:58:42 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

class ElementNotFoundException : public std::exception
{
	public:
	virtual const char *what() const throw();
};

template <typename T>
typename T::const_iterator easyfind(const T &haystack, int needle);

#include "easyfind.tpp"

#endif /* EASYFIND_HPP */