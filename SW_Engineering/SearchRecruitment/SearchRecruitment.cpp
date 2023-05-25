#include "SearchRecruitment.h"

SearchRecruitmentUI::SearchRecruitmentUI( vector<User*> userList){
    this->searchRecruitmentController = new SearchRecruitment(userList);
}

vector<Recruitment*> SearchRecruitmentUI::searchRecruitment(User* user,string comName){
    searchRecruitmentController->searchRecruitment(user,comName);
}

SearchRecruitment::SearchRecruitment( vector<User*> userList){
    this->userList = &userList;
}

vector<Recruitment*> SearchRecruitment::searchRecruitment(User* user,string comName){
    vector<Recruitment*> recruitmentList;
    for(int i=0;i<userList->size();i++){
        string name = (*userList)[i]->getName();
        if(name == comName){
            recruitmentList = (*userList)[i]->getRecruitmentList();
        }
    }

    cout<<"4.1. 채용정보 검색\n";
    for(int i=0;i<recruitmentList.size();i++){
        int num = recruitmentList[i]->getUser()->getNum();
        string task = recruitmentList[i]->getTask();
        int headcount = recruitmentList[i]->getHeadCount();
        string deadline = recruitmentList[i]->getDeadLine();
        cout<<"> "<<comName<<" "<<num<<" "<<task<<" "<<headcount<<" "<<deadline<<"\n";
    }
    
    return recruitmentList;
}