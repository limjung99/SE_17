#include <string>
#include "CompanyUser.h"
using namespace std;

class Recruitment{
    private:
        CompanyUser *companyuser;
        string task;
        int headcount;
        string deadline; /* "YYYY-MM-DD" */
    public:
        Recruitment(string task,int headcount,string deadline,CompanyUser *companyuser);
        void show_detail();
        void listRecruitment();
        void getRecruitment();
        void addApplication();
        
};