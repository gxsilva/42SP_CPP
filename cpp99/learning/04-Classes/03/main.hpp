/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:07:58 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 13:07:30 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once

template <typename T>
class Geek
{
public:
	Geek(T x, T y) { setA(x); setB(y); }
	void setA(T x);
	void setB(T y);
private:
	T a;
	T b;
};

template <typename T>
void	Geek<T>::setA(T x) { this->a = x; }

template <typename T>
void	Geek<T>::setB(T y) { this->b = y; }