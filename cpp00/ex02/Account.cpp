/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:13:17 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/20 22:21:20 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime> //std::tm, std::localtime, std::tm, time_t
#include <iomanip> //std::setw, std:setfill()
#include <sstream> //std::ostringstream
#include "Account.hpp"

int		__ACCOUNT_INDEX = 0;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
	std::time_t	t = std::time(NULL);
	std::tm* now = localtime(&t);
	
	std::string 		strTmp;
	std::ostringstream strTime;
	std::ostringstream strOsTmp;

	strTime << std::setfill('0')
	<< std::setw(2) << (now->tm_year)
	<< std::setw(2) << (now->tm_mon + 1)
	<< std::setw(2) << (now->tm_wday)
	<< "_";
	
	strOsTmp << t;
	strTmp = strOsTmp.str();
	strTime << strTmp.substr(strTmp.length() - 6, 6);
	std::cout << "[" << strTime.str() << "] ";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals()
			  << std::endl;
}

/* CONSTRUCTORS */
Account::Account(int initial_deposit)
{
	this->_accountIndex = __ACCOUNT_INDEX++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << checkAmount()
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
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			 << ";amount:" << checkAmount()
			 << ";closed" << std::endl;
}

/* GETTERS */
int	Account::getNbAccounts( void ) { return (Account::_nbAccounts); }
int	Account::getTotalAmount( void ) { return (Account::_totalAmount); }
int	Account::getNbDeposits( void ) { return (Account::_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (Account::_totalNbWithdrawals); }

/* METHODS */
void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << checkAmount()
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}

int		Account::checkAmount( void ) const { return (this->_amount); };


void Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount - deposit
			  << ";deposit:" << deposit
			  << ";amount:" << checkAmount()
			  << ";nb_deposits:" << this->_nbDeposits
			  << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	bool	action = true;

	if ((checkAmount() - withdrawal) < 0)
		action = false;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << checkAmount();
	if (action)
	{
		this->_amount = this->_amount - withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << ";withdrawal:"
				<< withdrawal
				<< ";amount:"
				<< checkAmount()
				<< ";nb_withdrawals:"
				<< this->_nbWithdrawals
				<< "\n";
	}
	else
		std::cout << ";withdrawal:refused\n";
	return (action);
}
