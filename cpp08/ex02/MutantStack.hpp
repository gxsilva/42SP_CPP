/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 01:16:09 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/16 21:47:24 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	public:
		typedef typename std::stack<T, C>::container_type::iterator iterator;
		typedef typename std::stack<T, C>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, C>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, C>::container_type::const_reverse_iterator const_reverse_iterator;
		
	MutantStack<T, C> (void) { return ; };
	MutantStack<T, C>(const MutantStack<T, C> &m): std::stack<T, C>(m) {};
	~MutantStack<T, C> (void) { return ; };
	MutantStack& operator=(const MutantStack<T, C> &m)
	{
		if (this != &m)
			this->c = m.c;
		return (*this);
	}

	MutantStack<T, C>::iterator begin() {return (this->c.begin());}
	MutantStack<T, C>::iterator end() {return (this->c.end());}

	MutantStack<T, C>::const_iterator begin() const {return (this->c.begin());}
	MutantStack<T, C>::const_iterator end() const {return (this->c.end());}

	MutantStack<T, C>::reverse_iterator rbegin() {return (this->c.rbegin());}
	MutantStack<T, C>::reverse_iterator rend() {return (this->c.rend());}
	
	MutantStack<T, C>::const_reverse_iterator rbegin() const {return (this->c.rbegin());}
	MutantStack<T, C>::const_reverse_iterator rend() const {return (this->c.rend());}
};

#endif /* MUTANTSTACK_HPP */