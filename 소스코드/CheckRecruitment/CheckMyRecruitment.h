#ifndef CHECK_MY_RECRUITMENT_H
#define CHECK_MY_RECRUITMENT_H
#include "../Users.h"
#include <iostream>

class CheckMyRecruitmentUI {
    CheckMyRecruitment* checkMyRecruitmentController;
    public:
        CheckMyRecruitmentUI(vector<Recruitment*> recruitmentList);
        void checkRecruitment(User* user);
};

class CheckMyRecruitment {
    vector<Recruitment*>* recruitmentList;
    public:
        CheckMyRecruitment(vector<Recruitment*> recruitmentList);
        void checkRecruitment(User* user);
};

#endif