#include "Recruitment.h"
#include "CompanyUser.h"
#include "../Collections/RecruitmentCollection.h"
#include <string>
using namespace std;


class RecruitmentAdd{
    /* */
    RecruitmentCollection *recruitmentcollection;
    CompanyUser *companyuser;
    public:
        RecruitmentAdd();
        void addRecruitment(CompanyUser *companyuser,string task,int headcount,string deadline);
};