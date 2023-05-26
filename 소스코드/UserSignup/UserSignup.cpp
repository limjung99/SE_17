#include "UserSignup.h"

UserSignUpUI::UserSignUpUI(vector<User*> userList){
    userSignUp = new UserSignUp(userList);
}

void UserSignUpUI::signUpGeneralUser(string id,string pw,string name,int resiNum){
    userSignUp->signUpGeneralUser(id,pw,name,resiNum);
}

UserSignUp::UserSignUp(vector<User*> userList){
    this->userList = &userList;
};

void UserSignUp::signUpGeneralUser(string id,string pw,string name,int resiNum){
    User* newUser = new GeneralUser(id,pw,name,resiNum);
    this->userList->push_back(newUser);
    cout<<"1.1. 회원가입"<<endl;
    cout<<"> 2 "<<name<<" "<<resiNum<<" "<<id<<" "<<pw<<endl;
}