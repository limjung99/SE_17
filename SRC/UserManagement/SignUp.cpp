#include "SignUp.h"
#include "../User/CompanyUser.h"
#include "../User/GeneralUser.h"

void signUp::addNewComUser(string comName, int busiNum, string ID, string PW){
    UserList lst = UserList::getInstance();
    User* us = NULL;
    us = new CompanyUser(comName, busiNum, ID, PW);
    lst.addUser(us);
}

void signUp::addNewGenUser(string name, int resiNum, string ID, string PW){
    UserList lst = UserList::getInstance();
    User* us;
    us = new GeneralUser(name,  resiNum,  ID,  PW);
    lst.addUser(us);
}

void signUpUI::createNewComUser(string comName, int busiNum, string ID, string PW){
    signUp::addNewComUser(comName, busiNum, ID, PW);
}
void signUpUI::createNewGenUser(string name, int resiNum, string ID, string PW){
    signUp::addNewGenUser(name,  resiNum,  ID,  PW);
}