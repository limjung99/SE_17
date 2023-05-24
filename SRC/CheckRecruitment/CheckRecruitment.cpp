#include "CheckRecruitment.h"

void CheckRecruitment::checkRecruitments(CompanyUser *companyuser){ /* companyuser인스턴스의 모든 채용정보를 출력하는 함수 */
    recruitmentcollection = companyuser->getRecruitmentCollection();
    recruitmentcollection->printRecruitment();
    return;
}