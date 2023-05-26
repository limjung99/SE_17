#ifndef ADD_RECRUITMENT_H
#define ADD_RECRUITMENT_H
#include "../Users.h"
#include <iostream>

class AddRecruitmentUI {
    AddRecruitment* addRecruitmentController;
    public:
        AddRecruitmentUI(vector<Recruitment*> recruitmentList);
        void addRecruitment(User* user,string task,int headcount,string deadline);
};

class AddRecruitment {
    vector<Recruitment*>* recruitmentList;
    public:
        AddRecruitment(vector<Recruitment*> recruitmentList);
        void addRecruitment(User* user,string task,int headcount,string deadline);
};

#endif