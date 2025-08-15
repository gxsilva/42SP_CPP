/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:29:50 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/21 13:50:34 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T	sumTypes(T a, T b) { return (a + b); }

template <typename X>
class AccountBank
{
	public:
		void	setAmount(X value);
		template <typename Y>
		void	setAmount(Y value) { _amount = value};
		X		getAmount(void);

	private:
		X	_amount;
};

template <typename X>
void AccountBank<X>::setAmount(X value) { this->_amount = X; }

template <typename X>
X AccountBank<X>::getAmount(void) { return (this->_amount); }