#include "User.h"
#include <vector>

class CompanyUser:User{
    private:
        string companyName;
        int BusinessNumber;
        vector<Recruitment> myrecruitments; /* companyuser가 작성한 채용공고 vector */
        int myRecruitmentNumber; /* 채용공고 숫자 */
    public:
        
        void listRecruitment();
        void addRecruitment(Recruitment *recruitment); /* companyuser가 작성한 recruitment를 member 배열에 포함시키는 함수*/
        int getRecruitmentsNumber();
        vector<Recruitment*> getRecruitmentsList(); /* companyuser 인스턴스가 소유한 recruitment인스턴스의 포인터 vector를 반환하는 함수 */
};