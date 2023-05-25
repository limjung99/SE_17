#include "Logout.h"

LogoutUI::LogoutUI(vector<User*> userList){
    logoutController = new Logout(userList);
}

void LogoutUI::logout(User* user){
    this->logoutController->logout(user);
}


Logout::Logout(vector<User*> userList){
    this->userList = &userList;
}

void Logout::logout(User* user){
    user = nullptr;
}
