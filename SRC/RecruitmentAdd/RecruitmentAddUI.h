#include "RecruitmentAdd.h"

class RecruitmentAddUI{
    RecruitmentAdd *recruitmentadd;
    public:
        RecruitmentAddUI();
        void addNewRecruitment(CompanyUser *companyuser,string task,int headcount,string deadline);
};