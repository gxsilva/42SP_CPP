	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:33:01 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 15:48:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdint.h>

class Base
{
	public:
		virtual ~Base();
};

Base * generate(void);
void identify(Base& p);
void identify(Base* p);

#endif // BASE_HPP