/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:55:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/15 16:46:25 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
	Classes

	Different keyword are used whend we are handle with classes 
	and objects:
	-> methods = functions
	-> attributes = variables

	Classes behavior as a blueprint for object creation
*/

#define ID_DOG 

class Dog
{
	public:
		//Constructor function must had the same name of Class name
		Dog()
		{
			//this function is automatically called whend a instance of the class is create
			std::cout << "A dog was born\n";
		}
		
		//public attribute
		std::string		name;

		//Declare functions
		void	Bark(void);
		void	setName(std::string name);
		void	setAge(int new_age);
		void	setColor(std::string color);
		void	setDogID(int new_id);

		//declare and set a function
		int	getAge(void)
		{
			return (this->_age);
		}
	//Private attributes
	private:
		int				_age;
		int				_id;
		std::string		_color;
};

//Set functions
void Dog::Bark() { std::cout << "Whof\n"; }
void Dog::setName(std::string name) { this->name = name; }
void Dog::setAge(int new_age) { this->_age = new_age; }
void Dog::setColor(std::string color) { this->_color = color; }
void Dog::setDogID(int new_id) { this->_id = new_id; }
