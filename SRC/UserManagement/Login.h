#ifndef LOGIN_H
#define LOGIN_H
#include "../User/User.h"
#include <string>
using namespace std; 

class LoginUI{
    private:
    public:
        User* loginRequest(string ID, string PW); /* control 의 함수 호출, 로그인 된 user instance의 포인터 반환 */
};

class Login{
    private:
    public:
        static User* login(string ID, string PW); /* UserList의 login 호출, 로그인 된 user instance의 포인터 반환 */
};

#endif