#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Cheqing_Account.h"

// Utility helper functions for Account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class

void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

//Utility Helper functions for cheqing account class
void display(const std::vector<Cheqing_Account> &accounts);
void deposit(std::vector<Cheqing_Account> &accounts, double amount);
void withdraw(std::vector<Cheqing_Account> &accounts, double amount);



#endif