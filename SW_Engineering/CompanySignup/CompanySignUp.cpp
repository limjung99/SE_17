#include "CompanySignUp.h"

CompanySignUpUI::CompanySignUpUI(vector<User*> userList){
    this->companySignUp = new CompanySignUp(userList);
}

void CompanySignUpUI::signUpCompanyUser(string id,string pw,string companyname,int busiNum){
    companySignUp->signUpCompanyUser(id,pw,companyname,busiNum);
}

CompanySignUp::CompanySignUp(vector<User*> userlist){
    this->userList = &userlist;
}

void CompanySignUp::signUpCompanyUser(string id,string pw,string companyname,int busiNum){
    User* newUser = new CompanyUser(id,pw,companyname,busiNum);
    this->userList->push_back(newUser);
    cout<<"1.1. 회원가입"<<endl;
    cout<<"> 1 "<<companyname<<" "<<busiNum<<" "<<id<<" "<<pw<<endl;
}