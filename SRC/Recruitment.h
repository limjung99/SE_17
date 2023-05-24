#include <string>
#include "CompanyUser.h"
#include "GeneralUser.h"
using namespace std;

class Recruitment{
    private:
        CompanyUser *companyuser;
        string task;
        int headcount;
        string deadline; /* "YYYY-MM-DD" */
    public:
        Recruitment(string task,int headcount,string deadline,CompanyUser *companyuser);
        
        string getCompanyName();
        string getBusinessNum();
        string getTask();
        int getHeadcount()
        string getDeadline();

        void setTask(string newTask);
        void setHeadcount(int newHeadcount);
        void setDeadline(string newDeadline);

        void show_detail();
        void listRecruitment();
        void getRecruitment();
        void addApplication(GeneralUser &generaluser);
        
};