#ifndef USER_SIGNUP_H
#define USER_SIGNUP_H
#include "../Users.h"
#include <vector>
#include <iostream>

class UserSignUpUI {
    private:
        UserSignUp* userSignUp;
    public:
        UserSignUpUI(vector<User*> userList);
        void signUpGeneralUser(string id,string pw,string name,int resiNum);
};

class UserSignUp {
    private:
        vector<User*>* userList;
    public:
        UserSignUp(vector<User*> userList) {this->userList = &userList;};
        /* generaluser 생성 및 포인터를 userList에 push */
        void signUpGeneralUser(string id,string pw,string name,int resiNum); 
};

#endif