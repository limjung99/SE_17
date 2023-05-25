#include "RecruitmentDetailUI.h"

// ManageApplication 클래스의 addNewApplication() 함수를 호출하여 GeneralUser 및 Recruitment 객체에 지원정보 레퍼런스 추가
void RecruitmentDetailUI::applyRecruitment(GeneralUser* generaluser, int businessNum) {
    this -> manageApplication.addNewApplication(GeneralUser* generaluser, int businessNum);
    return;
}