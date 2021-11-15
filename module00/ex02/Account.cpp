/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjamali <zjamali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:57:22 by zjamali           #+#    #+#             */
/*   Updated: 2021/11/15 08:50:09 by zjamali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount = _totalAmount + _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
    _nbAccounts+= 1;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout<< "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

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
    std::cout<< "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << _amount << ";" << "deposit:" << deposit << ";";
    _amount = _amount + deposit ;
    _totalAmount += deposit;
    _nbDeposits++;
    std::cout << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" ;
    if (checkAmount() >= withdrawal)
    {
        std::cout<< "withdrawal:" << withdrawal << ";";
        _amount = _amount - withdrawal ;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        std::cout<< "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        _totalNbWithdrawals++;
        return(true);
    }
    else
    {
       std::cout<< "withdrawal:refused" << std::endl;
       return (false);
    }
}
int		Account::checkAmount( void ) const
{
    return (_amount);
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout<< "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl; 
}

void	Account::_displayTimestamp( void )
{
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,80,"[%Y%m%d_%I%M%S] ",timeinfo);
    std::cout<< buffer ;
}