#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	_accountIndex = Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
	<< _amount << ";created" << std::endl;
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
	<< _amount;
	_amount +=deposit;
	_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:"
	<< _amount << ";nb_deposits" << _nbDeposits <<std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:"
		<< _amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		Account::_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount = Account::_totalAmount - withdrawal;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:" << withdrawal;
		_amount = _amount - withdrawal;
		std:: cout << "amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}

}
int Account::getNbAccounts() {
	return _nbAccounts;
}

int Account::getTotalAmount() {
	return _totalAmount;
}

int Account::getNbDeposits() {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

int Account::checkAmount() const {
	return _amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
	<< _amount << ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
void Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	time (&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << std::setfill('0') << "[" << (timeinfo->tm_year + 1900)
			  << std::setw(2) << timeinfo->tm_mon
			  << std::setw(2) << timeinfo->tm_mday << "_"
			  << std::setw(2) << timeinfo->tm_hour
			  << std::setw(2) << timeinfo->tm_min
			  << std::setw(2) << timeinfo->tm_sec << "] ";
}
Account::~Account() {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";closed" << std::endl;
}