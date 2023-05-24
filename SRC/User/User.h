#include <string>
using namespace std;
#define Max_Length 1000

class User{
    private:
        string userID;
        string userPassword;
        Recruitment* recruitments[Max_Length];
    public:
        void login();
};