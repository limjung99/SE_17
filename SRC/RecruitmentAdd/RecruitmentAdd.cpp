#include "RecruitmentAdd.h"

/* CompanyUser가 등록한 Recruitment를 동적 생성하고, companyuser인스턴스의 멤버변수로 포함시키는 함수 */
void RecruitmentAdd::addRecruitment(CompanyUser *companyuser,string task,int headcount,string deadline){
    recruitmentcollection = companyuser->getRecruitmentCollection();
    recruitmentcollection->addRecruitment(task,headcount,deadline);
    return;
};