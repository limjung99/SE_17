#ifndef WITHDRAW_H
#define WITHDRAW_H
#include <iostream>
#include <vector>
#include "../Users.h"
using namespace std;

class WithdrawUI {
    Withdraw* withdraw;
    public:
        WithdrawUI(vector<User*> userList);
        void withdrawUser(User* user);
};

class Withdraw {
    vector<User*>* userlist;
    public:
        Withdraw(vector<User*> userList);
        void withdrawUser(User* user);
};

#endif