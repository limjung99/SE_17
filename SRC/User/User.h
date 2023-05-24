#include <string>
#include <vector>
using namespace std;


class User{
    private:
        bool loginState;
    protected:
        string userID;
        string userPassword;
    public:
        User(string ID, string PW);
        string getID();
        string getPW();
        void login();
        void logout();
};

class UserList{
    private:
        static vector<User*>userList; 
        static int numUsers;
        static UserList* instance_;
        UserList() {numUsers = 0;}
    public:
        static UserList& getInstance();
        void addUser(User* us);
        string deleteUser(User* us);
        string logout(string ID);
        User* login(string ID, string PW);
        User* search(string searchID);
};