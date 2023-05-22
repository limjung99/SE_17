#include "Recruitment.h"
#include "CompanyUser.h"
#include <string>
using namespace std;

class RecruitmentAdd{
    Recruitment *recruitments[1000];

    public:
        void addRecruitment(CompanyUser &companyuser,string task,int headcount,string deadline);
};