/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:00:16 by dilovancand       #+#    #+#             */
/*   Updated: 2023/12/08 16:45:21 by dilovancand      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctype.h>
#include <string>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() <<  ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<  ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:"  << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount;

	_displayTimestamp();
	p_amount = this->_amount;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << " index:" << this->_accountIndex <<  ";p_amount:" << p_amount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposit:"  << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount;

	_displayTimestamp();
	p_amount = this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << " index:" << this->_accountIndex <<  ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << " index:" << this->_accountIndex <<  ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawal:"  << this->_nbWithdrawals << std::endl;
		return (1);
	}
}

void	Account::_displayTimestamp( void )
{
	time_t Time;
	struct tm *timeinfo;
	char str[20];

	time(&Time);
	timeinfo = localtime(&Time);
	strftime(str, 20, "[%Y%m%d_%H%M%S]",timeinfo);
	std::cout << str;
}

Account::Account(int initialdeposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<  ";amount:" << initialdeposit << ";created" << std::endl;
	this->_nbAccounts++;
	this->_amount += initialdeposit;
	this->_totalAmount +=initialdeposit;
}

Account::~Account()
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<  ";amount:" << this->_amount << ";closed" << std::endl;
}
