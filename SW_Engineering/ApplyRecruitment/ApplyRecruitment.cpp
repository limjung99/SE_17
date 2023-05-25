#include "ApplyRecruitment.h"

ApplyRecruitmentUI::ApplyRecruitmentUI(vector<User*> userList){
    applyRecruitmentController = new ApplyRecruitment(userList);
}

void ApplyRecruitmentUI::applyRecruitment(User* user,int busiNum,vector<Recruitment*> recruitmentList){
    this->applyRecruitmentController->applyRecruitment(user,busiNum,recruitmentList);
}

ApplyRecruitment::ApplyRecruitment(vector<User*> userList){
    this->userList = &userList;
}

void ApplyRecruitment::applyRecruitment(User* user,int busiNum,vector<Recruitment*> recruitmentList){
    
    for(int i=0;i<recruitmentList.size();i++){
        User* companyuser = recruitmentList[i]->getUser();
        if(companyuser->getNum() == busiNum){
            string comName = companyuser->getName();
            int num = companyuser->getNum();
            cout<<"4.2. 채용지원\n";
            cout<<"> "<<comName<<" "<<num<<"\n";
            recruitmentList[i]->apply(user);
        }
    }
}