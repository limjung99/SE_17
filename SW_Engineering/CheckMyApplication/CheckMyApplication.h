#ifndef CHECK_MY_APPLICATION_H
#define CHECK_MY_APPLICATION_H
#include "../Users.h"
#include <vector>
#include <iostream>
using namespace std;

class CheckMyApplicationUI {
    CheckMyApplication* checkMyApplicationController;
    public:
        CheckMyApplicationUI(vector<User*> userList);
        vector<Recruitment*> checkMyApplition(User* user);

};

class CheckMyApplication {
    vector<User*>* userList;
    public:
        CheckMyApplication(vector<User*> userList);
        vector<Recruitment*> checkMyApplication(User* user);
};


#endif