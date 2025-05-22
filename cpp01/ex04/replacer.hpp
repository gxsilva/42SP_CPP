/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 19:01:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/22 19:59:24 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
#include <fstream> //ifstream, ofstrem, .is_open()
#include <sstream> //std::ostringstream
#include <cstring>
 
int verifyIO(std::string inputFileName, std::string outputFileName);

#endif

/* 
	ifostream -> input file stream -> propouse to read
	ofostream -> output file stream -> propouse to write
*/

/*in cpp std::string can accpet a const char * to make the casting
to the type of std::string (the std::string class constructor make this)*/