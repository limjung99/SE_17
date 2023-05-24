#include "ManageApplication.h"

// generaluser인스턴스의 모든 지원정보 출력하는 함수
void ManageApplication::checkApplications(GeneralUser *generaluser) { 
    recruitmentcollection = generaluser->getRecruitmentCollection();
    recruitmentcollection->printApplications();
    return;
}

// generaluser가 지원취소할 application을 선택하고 취소하는 함수
void ManageApplication::selectApplication(GeneralUser *generaluser, int businessNumber) {
    recruitmentcollection = generaluser->getRecruitmentCollection();
    Recruitment* selectedApplication = recruitmentCollection->cancelApplication(businessNumber);
}