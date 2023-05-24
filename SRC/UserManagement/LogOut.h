#include "../User/User.h"
#include <string>

class LogoutUI{
    private:
    public:
        string logoutRequest(User* us);
};

class Logout{
    private:
    public:
        static string logout(User* us);
};