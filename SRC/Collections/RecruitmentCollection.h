#include "../Recruitment/Recruitment.h"
#include <vector>
using namespace std;

class RecruitmentCollection{
    vector<Recruitment> ownedRecruitment;
    public:
        void addRecruitment(string task,int headcount,string deadline);
        void printRecruitment(); /* 자신이 레퍼런스하고 있는 모든 recruitment 출력 */
};