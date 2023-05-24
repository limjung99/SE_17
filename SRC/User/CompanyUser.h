#include "User.h"
#include <vector>

class CompanyUser:public User{
    private:
        string companyName;
        int BusinessNumber;
        RecruitmentCollection* ownRecruitment; /* 소유한 recruitment의 collection 인스턴스포인터*/
        int myRecruitmentNumber; /* 채용공고 숫자 */
    public:
        CompanyUser(string comName, int busiNum, string ID, string PW);
        void listRecruitment(); /* companyuser 인스턴스가 소유한 recruitment list */
        void addRecruitment(Recruitment *recruitment); /* companyuser가 작성한 recruitment를 member 배열에 포함시키는 함수*/
        int getRecruitmentsNumber();
        RecruitmentCollection* getRecruitmentCollection();
};