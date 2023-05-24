#include "WithdrawMembership.h"

string WithdrawMembershipUI::withdrawMembership(User* us){
    return WithdrawMembership::deleteUser(us);
}

string WithdrawMembership::deleteUser(User* us){
        UserList lst = UserList::getInstance();    
        return lst.deleteUser(us);
}