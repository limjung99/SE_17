#include "CheckMyApplication.h"

CheckMyApplicationUI::CheckMyApplicationUI(vector<User*> userList){
    checkMyApplicationController = new CheckMyApplication(userList);
}

vector<Recruitment*> CheckMyApplicationUI::checkMyApplition(User* user){
    checkMyApplicationController->checkMyApplication(user);
}

CheckMyApplication::CheckMyApplication(vector<User*> userList){
    this->userList = &userList;
}

vector<Recruitment*> CheckMyApplication::checkMyApplication(User* user){
    vector<Recruitment*> findRecruitment;
    findRecruitment = user->getRecruitmentList();
    cout<<"4.3. 지원정보조회\n";
    for(int i=0;i<findRecruitment.size();i++){
        string comName = findRecruitment[i]->getUser()->getName();
        int busiNum = findRecruitment[i]->getUser()->getNum();
        string task = findRecruitment[i]->getTask();
        int headcount = findRecruitment[i]->getHeadCount();
        string deadline = findRecruitment[i]->getDeadLine();
        cout<<"> "<<comName<<" "<<busiNum<<" "<<task<<" "<<headcount<<" "<<deadline<<"\n";
    }
    return findRecruitment;
}