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



/* 단일 instance를 return. singleton 구현 */
UserList& UserList::getInstance(){
    if (instance_ == NULL){
        instance_ = new UserList();
    }
    return *instance_;
}

// 생성된 user instance 를 list에 저장
void UserList::addUser(User* us){
    userList[numUsers++] = us;
}

//요청받은 user를 list에서 제거
string UserList::deleteUser(User* us){
    string userID = us->getID();
    for (int i = 0; i < numUsers; i++){
        if (userList[i]->getID() == userID){
            userList.erase(userList.begin()+i);     //list에서 제거
            return userID;                          //삭제된 userID return
        }
    }
    return NULL;
}

//로그아웃 
string UserList::logout(string ID){
    for (int i = 0; i < numUsers; i++){
        if (userList[i]->getID() == ID){
            userList[i]->logout();              //user instace 의 loginstat를 false로 변경
            return userList[i]->getID();        //로그아웃 된 userID return
        }
    }
    return NULL;
}

// 로그인
User* UserList::login(string ID, string PW){
    for (int i = 0; i < numUsers; i++){
        if ((userList[i]->getID() == ID) &&(userList[i]->getPW() == PW)){
            userList[i]->login();               //user instace 의 loginstat를 true로 변경
            return userList[i];                 //로그인 된 user instance 포인터 return
        }
    }
    return NULL;
}

//id와 맞는 instance return 기능
User* UserList::search(string searchID){
    for (int i = 0; i < numUsers; i++){
        if (userList[i]->getID() == searchID){
            return userList[i];                 //매칭된 user instance 포인터 return
        }
    }
    return NULL;
}
