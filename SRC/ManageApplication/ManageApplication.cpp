#include "ManageApplication.h"

// generaluser인스턴스의 모든 지원정보 출력하는 함수
void ManageApplication::manageapplication(GeneralUser& generaluser) { 
    vector<Recruitment*> recruitmentList = generaluser.getRecruitmentsList();
    for (int i = 0; i < companyuser.getRecruitmentsNumber(); i++) {
        recruitmentList[i]->show_detail();
    }

}