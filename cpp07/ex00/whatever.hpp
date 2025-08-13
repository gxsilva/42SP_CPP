/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:52:16 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/12 17:02:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

template <typename T>
T max(const T x, const T y)
{
	return (x > y ? x : y);
}