#include "Login.h"
#include "../User/User.h"
using namespace std; 

User* LoginUI::loginRequest(string ID, string PW){
    return Login::login(ID, PW);
}

User* Login::login(string ID, string PW){
    UserList lst = UserList::getInstance();
    return lst.login(ID, PW);
}
