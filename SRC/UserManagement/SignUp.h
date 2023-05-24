#include <string>
#include "../User/User.h"
using namespace std;

class signUp{
    private:
    public:
        static void addNewComUser(string comName, int busiNum, string ID, string PW);
        static void addNewGenUser(string name, int resiNum, string ID, string PW);
};

class signUpUI{
    private:
    public:
        void createNewComUser(string comName, int busiNum, string ID, string PW);
        void createNewGenUser(string name, int resiNum, string ID, string PW);
};