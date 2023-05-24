#ifndef WITHDRAWMEMBERSHIP_H
#define WITHDRAWMEMBERSHIP_H
#include "../User/User.h"
#include <string>

/* 회원탈퇴 */

class WithdrawMembershipUI{
    private:
    public:
        string withdrawMembership(User* us);    //return: 탈퇴한 userID
};
class WithdrawMembership{
    private:
    public:
        // UserList의 deleteUser 호출하는 함수
        static string deleteUser(User* us);     //return: 탈퇴한 userID
};
#endif