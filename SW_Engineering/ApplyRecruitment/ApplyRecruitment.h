#ifndef APPLY_RECRUITMENT_H
#define APPLY_RECRUITMENT_H
#include "../Users.h"
#include <vector>
#include <iostream>
using namespace std;

class ApplyRecruitmentUI {
    ApplyRecruitment* applyRecruitmentController;
    public:
        ApplyRecruitmentUI(vector<User*> userList);
        void applyRecruitment(User* user,int busiNum,vector<Recruitment*> recruitmentList);

};

class ApplyRecruitment {
    vector<User*>* userList;
    CompanyUser* comUser;
    public:
        ApplyRecruitment(vector<User*> userList);
        void applyRecruitment(User* user,int busiNum,vector<Recruitment*> recruitmentList);
};


#endif