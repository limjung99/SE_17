#include "SignUp.h"
#include "../User/CompanyUser.h"
#include "../User/GeneralUser.h"

/* UI에서 control로 그대로 전달 */
void signUpUI::createNewComUser(string comName, int busiNum, string ID, string PW){
    signUp::addNewComUser(comName, busiNum, ID, PW);
}
void signUpUI::createNewGenUser(string name, int resiNum, string ID, string PW){
    signUp::addNewGenUser(name,  resiNum,  ID,  PW);
}

/* 입력받은 정보로 companyUser instance를 만들고 UserList에 추가함 */
void signUp::addNewComUser(string comName, int busiNum, string ID, string PW){
    UserList lst = UserList::getInstance();         /* 단일 UserList instance 불러옴 */
    User* us = NULL;
    us = new CompanyUser(comName, busiNum, ID, PW); /* companyUser instance 생성 */
    lst.addUser(us);                                /* UserList 에 추가 */
}

void signUp::addNewGenUser(string name, int resiNum, string ID, string PW){
    UserList lst = UserList::getInstance();         /* 단일 UserList instance 불러옴 */
    User* us;
    us = new GeneralUser(name,  resiNum,  ID,  PW); /* generalUser instance 생성 */
    lst.addUser(us);                                /* UserList 에 추가 */
}
