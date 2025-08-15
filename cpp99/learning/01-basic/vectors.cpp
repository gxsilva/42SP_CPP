/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:47:17 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 12:00:55 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<string> colors;

	colors.push_back("Yellow");
	colors.push_back("Blue");
	colors.push_back("Red");
	for (int i = 0; i < colors.size(); i++)
		cout << colors[i] << "\n";
	return (0);
}