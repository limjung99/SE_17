#ifndef GENERALUSER_H
#define GENERALUSER_H
#include "User.h"
#include "../Collections/RecruitmentCollection.h"

class GeneralUser:public User{
    private:
        string userName;  
        int ResidentRegistrationNumber; /* 주민번호, "98765" */
        RecruitmentCollection* appliedRecruitment;
    public:
        GeneralUser(string name, int resiNum, string ID, string PW);
        void addApplication(Recruitment &recruitment);
        RecruitmentCollection* getRecruitmentCollection();
};
#endif
