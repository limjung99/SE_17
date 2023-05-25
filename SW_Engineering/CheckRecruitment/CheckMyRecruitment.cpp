#include "CheckMyRecruitment.h"

CheckMyRecruitmentUI::CheckMyRecruitmentUI(vector<Recruitment*> recruitmentList){
    checkMyRecruitmentController = new CheckMyRecruitment(recruitmentList);
}

void CheckMyRecruitmentUI::checkRecruitment(User* user){
    checkMyRecruitmentController->checkRecruitment(user);
}

CheckMyRecruitment::CheckMyRecruitment(vector<Recruitment*> recruitmentList){
    this->recruitmentList = &recruitmentList;
}

void CheckMyRecruitment::checkRecruitment(User* user){
    vector<Recruitment*> myRecruitment = user->getRecruitmentList();
    cout<<"3.2. 등록된 채용정보 조회\n";
    for(int i=0;i<myRecruitment.size();i++){
        cout<<"> {"<<myRecruitment[i]->getTask()<<" "<<myRecruitment[i]->getHeadCount()<<" "<<myRecruitment[i]->getDeadLine()<<"}\n";
    }
}