/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:43:13 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 20:21:51 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	if (DEBUG)
		std::cout << "[RPN]: Default constructor called" << std::endl;
	return ;
}

RPN::~RPN(void)
{
	if (DEBUG)
		std::cout << "[RPN]: Default destructor called" << std::endl;
	return ;
}

RPN::RPN(const RPN& other)
: _stack(other._stack)
{
	if (DEBUG)
		std::cout << "[RPN]: Copy constructor called" << std::endl;
}

RPN& RPN::operator=(const RPN& other)
{
	if (DEBUG)
		std::cout << "[RPN]: Assign constructor called" << std::endl;
	if (this != &other)
		this->_stack = other._stack;
	return (*this);
}

float RPN::calc(const std::string &input)
{
	if(input.empty())
		throw (RPNInvalidFormat());

	std::istringstream iss(input);
	std::string			token;

	while(iss >> token)
	{
		if (token.size() == 1  && isdigit(token[0]))
			_stack.push(token[0] - '0');
		else if (isTokenOperator(token))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: Not enough operands for operator in RPN expression.");
			
			int	x = _stack.top();
			_stack.pop();
			
			int	y = _stack.top();
			_stack.pop();

			applayOperation(token, x, y);
		}
		else
			throw (RPNInvalidFormat());
	}
	if (_stack.size() != 1)
		throw (std::runtime_error ("Error: Not enough operands for operator in RPN expression."));
	return (_stack.top());
}

void	RPN::applayOperation(const std::string &token, int x, int y)
{
	int result = 0;

	if (token == "+")
		result = y + x;
	else if (token == "-")
		result = y - x;
	else if (token == "*")
		result = y * x;
	else if (token == "/")
	{
		if (x == 0)
			throw std::runtime_error("Error: Division by zero.");
		result = y / x;
	}
	else
		throw RPNUnexpectedToken();

	_stack.push(result);
}


//-------------PRIVATE METHODS-------

bool	RPN::isTokenOperator(const std::string &token) const
{
	if (token == "+" || token == "-" || token == "/" || token == "*")
		return (true);
	return (false);
}


//-----------------EXCEPTIONS----------

const char *RPN::RPNInvalidFormat::what() const throw()
{
	return ("Error: Invalid RPN expression or format.");
}

const char *RPN::RPNUnexpectedToken::what() const throw()
{
	return "Error: Unexpected token. Only single-digit numbers (0-9) and operators (+, -, *, /) are allowed in the expression.";
}