/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:13:17 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 22:14:07 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime> //std::tm, std::localtime, std::tm, time_t
#include <iomanip> //std::setw, std:setfill()
#include <sstream> //std::ostringstream
#include "Account.hpp"

int		__ACCOUNT_INDEX = 0;

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

void _displayTimestamp(void)
{
	std::time_t	t = std::time(NULL);
	std::tm* now = localtime(&t);
	
	std::string 		strTmp;
	std::ostringstream strTime;
	std::ostringstream strOsTmp;

	strTime << std::setfill('0')
	<< std::setw(2) << (now->tm_year % 100)
	<< std::setw(2) << (now->tm_mon + 1)
	<< std::setw(2) << (now->tm_wday)
	<< "_";
	
	strOsTmp << t;
	strTmp = strOsTmp.str();
	strTime << strTmp.substr(strTmp.length() - 6, 6);
	std::cout << strTime.str();
}

void	displayAccountsInfos( void )
{

}

/* CONSTRUCTORS*/
Account::Account(int initial_deposit)
{
	this->_accountIndex = __ACCOUNT_INDEX++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "[";
	 _displayTimestamp();
	std::cout << "] "
			  << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;

}

Account::Account(void)
{
	this->_accountIndex = __ACCOUNT_INDEX++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

/* DESTRUCTORS */
Account::~Account(void)
{
	std::cout << "[";
	_displayTimestamp();
	std::cout << "] "
			 << "index:" << this->_accountIndex
			 << ";amount:" << this->_amount
			 << ";closed" << std::endl;
}