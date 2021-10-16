#include "Account.hpp"
# include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(): _amount(0), _nbDeposits(0) ,_nbWithdrawals(0)
{
	_displayTimestamp();
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
    _nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account( int initial_deposit ): _amount(initial_deposit), _nbDeposits(0) ,_nbWithdrawals(0)
{
	_displayTimestamp();
	_totalAmount += _amount;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
    _nbAccounts--;
    _totalAmount -= _amount;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) { return (_nbAccounts); }
int	Account::getTotalAmount( void ) { return (_totalAmount); }
int	Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::_displayTimestamp( void )
{
    std::time_t localtime = time(nullptr);
    std::tm *timestamp = std::localtime(&localtime);
    
    // std::cout << "[" << timestamp->tm_year << timestamp->tm_mon << timestamp->tm_mday;
    // std::cout << "_" << timestamp->tm_hour << timestamp->tm_min << timestamp->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_totalNbDeposits++;
    _nbDeposits++;
	_amount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << deposit << ";nb_deposits:";
	std::cout << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    if(_amount > withdrawal)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
        std::cout << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
        _amount -= withdrawal;
        return (1);
    }
    else
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return (0);
    }
}

int		Account::checkAmount( void ) const
{
    Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
	return (_amount);
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
