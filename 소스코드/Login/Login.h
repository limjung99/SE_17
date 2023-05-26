#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <string>
#include <vector>
#include "../Users.h"
using namespace std;

class LoginUI {
    Login* loginController;
    public:
        LoginUI(vector<User*> userList);
        void login(string id,string pw,User* user);
};

class Login {
    vector<User*>* userList;
    public:
        Login(vector<User*> userList);
        /* system logiendID를 바꿔주는 함수 */
        void login(string id,string pw,User* user);
};

#endif