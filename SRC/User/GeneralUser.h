#include "User.h"
#include "../Collections/RecruitmentCollection.h"

class GeneralUser:User{
    private:
        string userName;
        int ResidentRegistrationNumber;
        RecruitmentCollection* appliedRecruitment;
    public:
        void addApplication(Recruitment &recruitment);
};

