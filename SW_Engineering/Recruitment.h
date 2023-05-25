#ifndef RECRUITMENT_H
#define RECRUITMENT_H
#include <string>
#include <vector>
#include "Users.h"
using namespace std;

class Recruitment{
    string task;
    int headcount;
    string deadline;
    User* comUser;
    vector<User*> appliedUsers;
    public:
        Recruitment(string task,int headcount,string deadline,User* user);
        string getTask();
        int getHeadCount();
        string getDeadLine();
        User* getUser();
        void apply(User* user);
        int getNumApplicant();
};

#endif