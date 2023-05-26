#ifndef COMPANY_SIGNUP_H
#define COMPANY_SIGNUP_H
#include <iostream>
#include <string>
#include <vector>
#include "../Users.h"
using namespace std;

class CompanySignUpUI {
    CompanySignUp* companySignUp;
    public:
        void signUpCompanyUser(string id,string pw,string companyname,int busiNum);
        CompanySignUpUI(vector<User*> userList);
};

class CompanySignUp {
    vector<User*>* userList;
    public:
        CompanySignUp(vector<User*> userlist);
        void signUpCompanyUser(string id,string pw,string companyname,int busiNum);
};

#endif