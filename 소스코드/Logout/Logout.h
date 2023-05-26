#include <string>
#include <vector>
#include "../Users.h"
using namespace std;

class LogoutUI {
    Logout* logoutController;
    public:
        LogoutUI(vector<User*> userList);
        void logout(User* user);
};

class Logout {
    vector<User*>* userList;
    public:
        Logout(vector<User*> userList);
        void logout(User* user);

};