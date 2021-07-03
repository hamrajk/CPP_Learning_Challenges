#include "Cheqing_Account.h"

Cheqing_Account::Cheqing_Account(std::string name, double balance, double flat_fee)
    : Account{name, balance}, flat_fee{flat_fee} {
        
    }
    
bool Cheqing_Account::withdraw (double amount) {
    amount += flat_fee;
    return (Account::withdraw(amount));
}

std::ostream &operator<<(std::ostream &os, const Cheqing_Account &account) {
    os << "Cheqing Account: " << account.name << ":" << account.balance << "," << account.flat_fee << "]";
    return os;
}