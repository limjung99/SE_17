#include "Login.h"

LoginUI::LoginUI(vector<User*> userList){
    loginController = new Login(userList);
}

void LoginUI::login(string id,string pw,User* user){
    loginController->login(id,pw,user);
}

Login::Login(vector<User*> userList){
    this->userList = &userList;
}

void Login::login(string id,string pw,User* user){
    for(int i=0;i<this->userList->size();i++){
       User* currentUser = (*this->userList)[i];
       if(id == currentUser->getID() && pw == currentUser->getPW()) {
            user = currentUser;
            cout<<"2.1. 로그인"<<endl;
            cout<<"> "<<id<<endl;
            break;
       }
    }
}