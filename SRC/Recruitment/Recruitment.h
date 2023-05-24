#include "../User/CompanyUser.h"
#include "../User/GeneralUser.h"
#include <string>
using namespace std;

class Recruitment{
    private:
        string task;
        int headcount;
        string deadline; /* "YYYY-MM-DD" */
        string companyName;
        int businessNumber; /* 4digits number */
    public:
        Recruitment(string task,int headcount,string deadline);
        Application(string task, int headcount, string deadline, string companyName,
            int businessNumber, GeneralUser* generaluser);
        void show_detail();
        void getInfo();
        void listRecruitment();
        void getRecruitment();
        void addApplication();
        string getTask();
        int getHeadCount();
        string getDeadLine();
        string getCompanyName();
        int getBusinessNumber();
        
};