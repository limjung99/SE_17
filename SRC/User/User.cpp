#include "User.h"

User::User(string ID, string PW){
    this->userID = ID;
    this->userPassword = ID;
}
string User::getID(){
    return this->userID;
}

string User::getPW(){
    return this->userPassword;
}
void User::login(){
    this->loginState = true;
}
void User::logout(){
    this->loginState = false;
}




UserList& UserList::getInstance(){
    if (instance_ == NULL){
        instance_ = new UserList();
    }
    return *instance_;
}

void UserList::addUser(User* us){
    userList[numUsers++] = us;
}

string UserList::deleteUser(User* us){
    string userID = us->getID();
    for (int i = 0; i < numUsers; i++){
        if (userList[i]->getID() == userID){
            userList.erase(userList.begin()+i);
            return userID;
        }
    }
    return NULL;
}

string UserList::logout(string ID){
    for (int i = 0; i < numUsers; i++){
        if (userList[i]->getID() == ID){
            userList[i]->logout();
            return userList[i]->getID();
        }
    }
    return NULL;
}

User* UserList::login(string ID, string PW){
    for (int i = 0; i < numUsers; i++){
        if ((userList[i]->getID() == ID) &&(userList[i]->getPW() == PW)){
            userList[i]->login();
            return userList[i];
        }
    }
    return NULL;
}

User* UserList::search(string searchID){
    for (int i = 0; i < numUsers; i++){
        if (userList[i]->getID() == searchID){
            return userList[i];
        }
    }
    return NULL;
}
