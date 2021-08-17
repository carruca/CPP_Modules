#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::getNbAccounts( void ) {

	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {

	return _totalAmount;
}

int	Account::getNbDeposits( void ) {

	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {

	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {

	return ;
}

Account::Account( int initial_deposit ) {

	this->_nbDeposits = initial_deposit;
	this->_nbAccounts++;
	return ;
}

Account::~Account( void ) {

	return ;
}

void	Account::makeDeposit( int deposit ) {

	this->_nbDeposits += deposit;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	this->_nbWithdrawals += withdrawal;
	return ;
}

int	Account::checkAmount( void ) const {

	return this->_amount;
}

void	Account::displayStatus( void ) const {

	return ;
}

void	Account::_displayTimestamp( void ) const {

	time_t			now		= time(0);
	struct std:tm	*ptm	= std::localtime(&now);

	std::cout << std::put_time(ptm, "[%G%m%d_%H%M%S]");
	return ;
}
