#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
using namespace std;

class User{
    private:
        bool loginState;    /* 로그인 상태 , 로그인이면 true */
    protected:
        string userID;
        string userPassword;
    public:
        User();
        User(string ID, string PW);
        string getID();
        string getPW();
        void login();   /* loginState를 수정하는 함수 */
        void logout();  /* loginState를 수정하는 함수 */
};

/* 싱글톤 class */
class UserList{
    private:
        static vector<User*>userList;
        static int numUsers;        /* list에 존재하는 user 수 */
        static UserList* instance_; /* 존재하는 하나의 instance */
        UserList() {numUsers = 0;}  
    public:
        static UserList& getInstance();     /* 하나의 instance를 리턴 */
        void addUser(User* us);             /* list에 user를 입력함 */
        string deleteUser(User* us);        /* list에서 삭제, 삭제된 ID 리턴 */
        string logout(string ID);           /* 일치하는 유저를 찾아 loginState 변경, 로그아웃 된 ID 리턴 */
        User* login(string ID, string PW);  /* param과 일치하는 user를 list에서 찾음, 일치하는 user instance의 포인터 리턴 */
        User* search(string searchID);      /* 주어진 id와 일치하는 user를 list에서 찾음, 일치하는 user instance의 포인터 리턴*/
};
#endif