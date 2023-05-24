#include "../Recruitment/Recruitment.h"
#include <vector>
using namespace std;

class RecruitmentCollection{
    vector<Recruitment> ownedRecruitment;
    vector<Recruitment> ownedApplication;
    public:
        void addRecruitment(string task,int headcount,string deadline);
        void printRecruitment(); /* 자신이 레퍼런스하고 있는 모든 recruitment 출력 */
        void addNewApplication(string companyName, int businessNumber,
            string task, int headcount, string deadline);
        void printApplications(); // 자신이 레퍼런스하고 있는 모든 recruitment 출력
        void cancelApplication(); // 선택된 recruitment 취소
};