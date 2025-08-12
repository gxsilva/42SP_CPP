/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 02:09:27 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 02:51:56 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


//---------------OCCF----------------------
Serializer::Serializer(void) { return ;}

Serializer::~Serializer(void) { return ;}

Serializer::Serializer(const Serializer& s)
{
	(void)s;
	return ;
}

Serializer	&Serializer::operator=(const Serializer& s)
{
	(void)s;
	return (*this);
}

//-------------STATIC METHODS-------------
uintptr_t Serializer::serialize(Data* ptr)
{
	if (!ptr)
		return (0);

	uintptr_t serializePtr = reinterpret_cast<uintptr_t>(ptr);
	return (serializePtr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *deserializePtr = reinterpret_cast<Data *>(raw);
	return (deserializePtr);
}