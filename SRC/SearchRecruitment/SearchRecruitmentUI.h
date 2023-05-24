#include "CompanyUser.h"
#include "SearchRecruitment.h"

// 채용정보검색 usecase
class SearchRecruitmentUI {
    private:
        SearchRecruitment* searchRecruitment;
    public:
        void searchRecruitments(CompanyUser &companyuser);
};