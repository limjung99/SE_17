#ifndef SEARCH_RECRUITMENT_H
#define SEARCH_RECRUITMENT_H

#include "../Users.h"
#include <iostream>

class SearchRecruitmentUI {
    SearchRecruitment* searchRecruitmentController;
    public:
        SearchRecruitmentUI( vector<User*> userList);
        vector<Recruitment*> searchRecruitment(User* user,string comName);
};

class SearchRecruitment {
    vector<User*>* userList;
    public:
        SearchRecruitment( vector<User*> userList);
        vector<Recruitment*> searchRecruitment(User* user,string comName);
};

#endif