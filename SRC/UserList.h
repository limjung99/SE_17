#include <vector>
#include "User/User.h"

class UserList{
    private:
        vector<User*> Users;
    public:
        void addUser(User* user);
        vector<User*>* getList();
};