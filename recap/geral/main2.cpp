/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:50:54 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/04 20:53:28 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector<std::string> colors; //the same as char **;
	
	//vector methods
	colors.push_back("Green"); //[1]
	colors.push_back("Yellow"); //[2]
	colors.push_back("Purple"); //[3]
	colors.insert(colors.begin(), "Red"); // [0]
	for (int i = 0; i < colors.size(); i++)
		std::cout << "Colors[" << i << "]:" << colors[i] << "\n";
	return 0;
}
