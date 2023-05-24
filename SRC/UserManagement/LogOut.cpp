#include "LogOut.h"
#include "../User/User.h"

/* 요청하는 user 포인터를 전달함 */
string LogoutUI::logoutRequest(User* us){
    return Logout::logout(us); /* 로그아웃된 아이디 "hn" */
}
/* 요청하는 user의 id를 UserList의 logout으로 전달, 로그아웃 된 ID를 return */
string Logout::logout(User* us){
    UserList lst = UserList::getInstance();
    return lst.logout(us->getID()); /* 로그아웃된 아이디 "hn" */
}