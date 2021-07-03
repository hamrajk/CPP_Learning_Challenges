// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    
    vector<Cheqing_Account> cheq_accounts;
    cheq_accounts.push_back(Cheqing_Account {} );
    cheq_accounts.push_back(Cheqing_Account {"guy"} );
    cheq_accounts.push_back(Cheqing_Account {"person", 2000} );
    cheq_accounts.push_back(Cheqing_Account {"steve", 5000, 5.0} );
    
    display(cheq_accounts);
    deposit(cheq_accounts, 1000);
    withdraw(cheq_accounts, 2000);
    

    return 0;
}

