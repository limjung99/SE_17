#ifndef LOGOUT_H
#define LOGOUT_H
#include "../User/User.h"
#include <string>

class LogoutUI{
    private:
    public:
        string logoutRequest(User* us); /* 로그아웃 요청한 user 포인터 전달 */
};

class Logout{
    private:
    public:
        static string logout(User* us); /* 로그아웃 요청한 user 포인터 전달, 로그아웃 된 user ID 리턴 */
};
#endif