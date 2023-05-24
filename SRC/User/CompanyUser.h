#include "User.h"
#include <vector>

class CompanyUser:User{
    private:
        string companyName;
        int BusinessNumber;
        vector<Recruitment> myrecruitments; /* companyuser가 작성한 채용공고 vector */
        int myRecruitmentNumber; /* 채용공고 숫자 */
    public:
<<<<<<< Updated upstream
        
        void listRecruitment();
=======
        void listRecruitment(); /* companyuser 인스턴스가 소유한 recruitment list */
>>>>>>> Stashed changes
        void addRecruitment(Recruitment *recruitment); /* companyuser가 작성한 recruitment를 member 배열에 포함시키는 함수*/
        int getRecruitmentsNumber();
      
};