/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:58:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 19:21:47 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Accounts.hpp"

int main(void)
{
	int		value[] = {5, 78, 21, 35};
	size_t	s_value = sizeof(value) / sizeof(value[0]);

	std::vector<Account::a> intVector(value, value + s_value);
	//Criação e atribuição de valores tanto no construtor da classe
	//quanto no construtor do vetor;
	return (0);
}