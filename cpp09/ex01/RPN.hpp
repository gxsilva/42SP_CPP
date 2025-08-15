/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:43:15 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 20:20:11 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#ifndef DEBUG
 #define DEBUG 0
#endif

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <exception>

class RPN
{
	private:
		std::stack<int> _stack;
		bool	isTokenOperator(const std::string &token) const;
		void	applayOperation (const std::string &token, int x, int y);
		
	public:
		//OCCF
		RPN(void);
		RPN(const RPN &r);
		RPN &operator=(const RPN& other);
		~RPN(void);

		class RPNInvalidFormat : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class RPNUnexpectedToken : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		float calc(const std::string &input);
};


#endif // RPN_HPP