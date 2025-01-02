#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void) {
}

Account::Account(int inicial_deposit) {
    _accountIndex = _nbAccounts++;
    _amount = inicial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _totalAmount += _amount;
    _displayTimestamp();

    std::cout << "index:" << _accountIndex << ";"
    << "amount:" << checkAmount() << ";"
    << "created\n";
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "amount:" << checkAmount() << ";"
    << "closed\n";
}

int Account::getNbAccounts() {
    return (_nbAccounts);
}

int Account::getNbDeposits() {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
    return (_totalNbWithdrawals);
}

int Account::getTotalAmount() {
    return (_totalAmount);
}

int Account::checkAmount() const {
    return (_amount);
}

void    Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
    << "total:" << getTotalAmount() << ";"
    << "deposits:" << getNbDeposits() << ";"
    << "withdrawals" << getNbWithdrawals() << '\n';
}

void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "p_amount:" << checkAmount() << ";"
    << "deposit:" << deposit << ";";
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "amount:" << checkAmount() << ";"
    << "nb_deposits:" << _nbDeposits << '\n';
}

bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "p_amount:" << checkAmount() << ";";
    if (checkAmount() < withdrawal) {
        std::cout << "withdrawal:refused\n";
        return (false);
    }
    else {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";"
        << "amount:" << checkAmount() << ";"
        << "nb_withdrawals:" << _nbWithdrawals << '\n';
        return (true);
    }
}

void    Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "amount:" << checkAmount() << ";"
    << "deposits:" << _nbDeposits << ";"
    << "withdrawals:" << _nbWithdrawals << '\n';
}

void    Account::_displayTimestamp(void) {
    time_t now = time(NULL);
    char buffer[18 + 1];

    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", localtime(&now));
	std::cout << buffer;
}
