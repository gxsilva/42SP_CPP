/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:52:01 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/26 19:07:15 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_HPP
#define CUBE_HPP

#include <iostream>

class cube
{
	public:
		cube(void) { return ;}
		~cube(void) { return ; }
		
		int		n;
		void	printN (void)
		{
			std::cout << "value: " << n << std::endl;
		}
};

/*
	protected -> plays the same role as 'private' the main difference is the inheritance
	can't inherit the private attributes and methods, proteced can be inherit.


	MODES
	-> public: inherit all public methods and attributes as public and all protected methods
	and attributes as proteced
*/
class cubeDerived : public cube
{
	public:
		cubeDerived(void) { return; };
		~cubeDerived(void) { return; };

		void setN();

		// void setN() { n = 22; }
};

//this is way is better to understand than sunddley came with an n=22
void cubeDerived::setN()
{
	this->n = 22;
}

#endif // CUBE_HPP