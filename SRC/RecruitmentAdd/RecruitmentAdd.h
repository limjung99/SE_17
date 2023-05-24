#include "Recruitment.h"
#include "CompanyUser.h"
#include <string>
using namespace std;
#define Max_Length 1000

class RecruitmentAdd{
    Recruitment *recruitments[Max_Length];
    public:
        RecruitmentAdd();
        void addRecruitment(CompanyUser &companyuser,string task,int headcount,string deadline);
};