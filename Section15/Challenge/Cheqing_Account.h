#ifndef _CHEQING_ACCOUNT_H_
#define _CHEQING_ACCOUNT_H_
#include "Account.h"

// Cheqing account is a type of account, not a type of saving account

class Cheqing_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Cheqing_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Cheqing Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_flat_fee = 1.5;
protected:
    double flat_fee;
public:
    Cheqing_Account(std::string name = def_name, double balance = def_balance, double flat_fee = def_flat_fee);
    bool withdraw (double amount);
    //inherits the deposit method from Account class


};

#endif  //_CHEQING_ACCOUNT_H
    


