#ifndef SIGNUP_H
#define SIGNUP_H
#include <string>
#include "../User/User.h"
using namespace std;

/* 회원가입 */

class signUpUI{
    private:
    public:
        void createNewComUser(string comName, int busiNum, string ID, string PW);
        void createNewGenUser(string name, int resiNum, string ID, string PW);
};

class signUp{
    private:
    public:
        /* instance를 만들고 UserList에 등록하는 함수들 */
        static void addNewComUser(string comName, int busiNum, string ID, string PW);
        static void addNewGenUser(string name, int resiNum, string ID, string PW);
};
#endif