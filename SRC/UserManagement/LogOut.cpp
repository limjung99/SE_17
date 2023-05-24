#include "LogOut.h"
#include "../User/User.h"

string LogoutUI::logoutRequest(User* us){
    return Logout::logout(us);
}

string Logout::logout(User* us){
    UserList lst = UserList::getInstance();
    return lst.logout(us->getID());
}