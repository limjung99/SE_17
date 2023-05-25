#include "AddRecruitment.h"

AddRecruitmentUI::AddRecruitmentUI(vector<Recruitment*> recruitmentList){
    this->addRecruitmentController = new AddRecruitment(recruitmentList);
}

void AddRecruitmentUI::addRecruitment(User* user,string task,int headcount,string deadline){
    this->addRecruitmentController->addRecruitment(user,task,headcount,deadline);
}

AddRecruitment::AddRecruitment(vector<Recruitment*> recruitmentList){
    this->recruitmentList = &recruitmentList;
}

void AddRecruitment::addRecruitment(User* user,string task,int headcount,string deadline){
    Recruitment* newRecruitment = new Recruitment(task,headcount,deadline,user);
    recruitmentList->push_back(newRecruitment);
    user->addRecruitment(newRecruitment);
    /* 출력 */
    cout<<"3.1. 채용정보등록\n";
    cout<<"> "<<task<<" "<<headcount<<" "<<deadline<<"\n";
}