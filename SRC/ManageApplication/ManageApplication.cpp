#include "ManageApplication.h"

// generaluser인스턴스의 모든 지원정보 출력하는 함수
void ManageApplication::checkMyRecruitment(GeneralUser *generaluser) { 
    recruitmentcollection = generaluser->getRecruitmentCollection();
    recruitmentcollection->printRecruitment();
    return;
}

void selectApplication() {

}