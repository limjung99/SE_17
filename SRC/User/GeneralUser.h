#include "User.h"
#include "../Collections/RecruitmentCollection.h"

class GeneralUser:public User{
    private:
        string userName;
        int ResidentRegistrationNumber;
        RecruitmentCollection* appliedRecruitment;
    public:
        GeneralUser(string name, int resiNum, string ID, string PW);
        void addApplication(Recruitment &recruitment);
        RecruitmentCollection* getRecruitmentCollection();
};

