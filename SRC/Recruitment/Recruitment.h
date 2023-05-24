#include "../User/CompanyUser.h"
#include <string>
using namespace std;

class Recruitment{
    private:
        string task;
        int headcount;
        string deadline; /* "YYYY-MM-DD" */
    public:
        Recruitment(string task,int headcount,string deadline);
        void show_detail();
        void listRecruitment();
        void getRecruitment();
        void addApplication();
        string getTask();
        int getHeadCount();
        string getDeadLine();
        
};