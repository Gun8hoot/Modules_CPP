#include "Account.hpp"

static void	Account::_displayTimestamp( void )
{
	std::time_t time_vars = std::time(0);

	std::local_time(&time_vars);
	std::utc_time(&time_vars);

	std::cout << "[";
	std::cout << time_vars->tm_year;
	std::cout << time_vars->tm_mon;
	std::cout << time_vars->tm_mday;
	std::cout << "_";
	std::cout << time_vars->tm_hour;
	std::cout << time_vars->tm_min;
	std::cout << time_vars->tm_sec;
	std::cout << "]";
}

void	Account::displayStatus( void ) const
{

}

static int	Account::getNbAccounts( void )
{
	
}

Account::Account( int initial_deposit )
{
	
}
