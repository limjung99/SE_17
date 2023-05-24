#include "Recruitment.h"
#include "CompanyUser.h"
#define Max_Length 1000

// 채용정보검색 usecase
class SearchRecruitment {
    private:
        CompanyUser *companyuser;
        Recruitment *recruitments[Max_Length];
    public:
        void showRecruitment(CompanyUser &companyuser);
}