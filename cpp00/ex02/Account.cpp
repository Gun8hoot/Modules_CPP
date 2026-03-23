#include "Account.hpp"

int Account::_nbAccounts       = 0;
int Account::_totalAmount      = 0;
int Account::_totalNbDeposits  = 0;
int Account::_totalNbWithdrawals = 0;

/* ----- PUBLIC ----- */
int	Account::getNbAccounts( void )
{
	int ret = Account::_nbAccounts;
	return (ret);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" <<  this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " account:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = getNbAccounts() + 1;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex <<_nbWithdrawals << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << " index:" << this->_accountIndex <<_nbWithdrawals << ";amount:" << this->_amount << ";closed" << std::endl;
	this->_amount = this->_amount + deposit;
	_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
	{
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawals:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawals:" << this->_accountIndex + withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << _totalNbWithdrawals << std::endl;
 		this->_amount = this->_amount - withdrawal;
 		_nbWithdrawals++;
 		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}


/* ----- PRIVATE ----- */

void	Account::_displayTimestamp( void )
{
	std::time_t time = std::time(0);

	std::tm *time_vars = std::localtime(&time);

	std::cout << "[";
	std::cout << time_vars->tm_year << time_vars->tm_mon << time_vars->tm_mday;
	std::cout << "_";
	std::cout << time_vars->tm_hour << time_vars->tm_min << time_vars->tm_sec;
	std::cout << "]";
}
