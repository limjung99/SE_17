#ifndef CANCLE_APPLICATION_H
#define CANCLE_APPLICATION_H
#include "../Users.h"
#include <vector>
#include <iostream>
using namespace std;

class CancleApplicationUI {
    CancleApplication* cancleApplicationController;
    public:
        CancleApplicationUI(vector<User*> userList);
        void cancleApplication(vector<Recruitment*> findlist,int busiNum,User* user);

};

class CancleApplication {
    vector<User*>* userList;
    public:
        CancleApplication(vector<User*> userList);
        void cancleApplication(vector<Recruitment*> findlist,int busiNum,User* user);
};


#endif