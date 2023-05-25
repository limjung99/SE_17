#include "PrintStastics.h"

PrintStasticsUI::PrintStasticsUI(vector<User*> userList){
    this->printStasticsController = new PrintStastics(userList);
}

void PrintStasticsUI::printStastics(User* user){
    printStasticsController->printStastics(user);
}

PrintStastics::PrintStastics(vector<User*> userList){
    this->userList = &userList;
}

void PrintStastics::printStastics(User* user){
    vector<Recruitment*> recruitmentList;
    recruitmentList = user->getRecruitmentList();
    cout<<"5.1. 지원 정보 통계\n";
    for(int i=0;i<recruitmentList.size();i++){
        cout<<"> "<<recruitmentList[i]->getTask()<<" "<<recruitmentList[i]->getNumApplicant()<<"\n";
    }
}

