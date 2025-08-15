/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:10:39 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/08/14 21:32:28 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//---------------------OCCF----------------
PmergeMe::PmergeMe(void)
{
	if (DEBUG)
		std::cout << "[PmergeMe]: Default constructor called" << std::endl;
	return ;
}

PmergeMe::~PmergeMe(void)
{
	if (DEBUG)
		std::cout << "[PmergeMe]: Default destructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe& pm)
: _vec(pm._vec), _deq(pm._deq)
{
	if (DEBUG)
		std::cout << "[PmergeMe]: Copy constructor called" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& pm)
{
	if (DEBUG)
		std::cout << "[PmergeMe]: Assign constructor called" << std::endl;
	if (this != &pm)
	{
		_vec = pm._vec;
		_deq = pm._deq;
	}
	return (*this);
}

void PmergeMe::fetchInput(int argc, char const *argv[])
{
	std::set<int> dataSet;

	for (int i = 1; i < argc; ++i)
	{
		const std::string input = argv[i];
		int value;

		std::istringstream iss(input);
		char extra;

		if (!(iss >> value) || (iss >> extra) || value < 0)
			throw std::runtime_error("Error: Invalid input '" + input + "'. Please provide a non-negative integer.");
		
		if (!dataSet.insert(value).second)
			throw std::runtime_error("Error: Duplicate value detected: '" + input + "'. Each number must be unique.");
		
		_vec.push_back(value);
		_deq.push_back(value);
	}
}
//---------------------VECTOR----------------

void PmergeMe::sortVector() {
	std::cout << "Before:\t";
	displayContainer(this->_vec);

	std::clock_t start = clock();
	std::vector<int> sorted = insertMergeSort<std::vector<int> >(this->_vec);
	std::clock_t finish = clock();

	if (!isSorted<std::vector<int> >(sorted))
			throw (std::runtime_error("sorting vectir failed!"));
	
	std::cout << "After:\t";
	displayContainer(sorted);

	double	elapsedTime = static_cast<double>(finish - start) * 1000000 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : "
			  << std::setprecision(5) << elapsedTime << " us" << std::endl;
}

void	PmergeMe::sortDeque(void) {
	std::clock_t	start = clock();
	std::deque<int>	sorted = insertMergeSort<std::deque<int> >(_deq);
	std::clock_t	finish = clock();

	if (!isSorted<std::deque<int> >(sorted))
		throw (std::runtime_error("sorting deque failed"));

	double	elapsedTime = static_cast<double>(finish - start) * 1000000 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque  : "
			  << std::setprecision(5) << elapsedTime << " us" << std::endl;
}

std::vector<int> generateInsertionSeq(size_t n) {
	std::vector<int> seq;
	std::set<int> seen;

	for (int j = 2; seq.size() < n; ++j) {
		int num = jacobSthal(j);
		if (num > static_cast<int>(n))
			num = static_cast<int>(n);
		while (num > 0 && !seen.count(num)) {
			seq.push_back(num);
			seen.insert(num);
			--num;
		}
	}
	return (seq);
}

int jacobSthal(int n) {
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (jacobSthal(n - 1) + 2 * jacobSthal(n - 2));
}
