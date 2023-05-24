#include "../User/User.h"
#include <string>
using namespace std; 

class LoginUI{
    private:
    public:
        User* loginRequest(string ID, string PW);
};

class Login{
    private:
    public:
        static User* login(string ID, string PW);
};