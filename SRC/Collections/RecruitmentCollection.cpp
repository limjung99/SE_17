#include "RecruitmentCollection.h"

void RecruitmentCollection::addRecruitment(string task,int headcount,string deadline){
    this->ownedRecruitment.push_back(Recruitment(task,headcount,deadline));
}

void RecruitmentCollection::printRecruitment(){
    for(int i=0;i<this->ownedRecruitment.size();i++){
        ownedRecruitment[i].show_detail();
    }
}

/*
RecruitmentCollection* recruitmentcollection를 가지는 addNewApplication이
존재한다고 가정함(현재는 collection과 연관이 되어있지 않은 형태로 구현됨
*/
void RecruitmentCollection::addNewApplication(string companyName, int businessNumber,
                                    string task, int headcount, string deadline) {
    this->ownedApplication.push_back(Recruitment(companyName, businessNumber, 
                                                task, headcount, deadline));
}

// 자신이 레퍼런스하고 있는 모든 recruitment 출력
void RecruitmentCollection::printApplications() {
    for (int i = 0; i < this->ownedRecruitment.size(); i++) {
        ownedRecruitment[i].getInfo();
    }
}

void RecruitmentCollection::cancelApplication(int businessNumber) {
    // businessNumber와 일치하는 recruitment를 찾아 삭제(취소)
    for (auto it = ownedApplication.begin(); it != ownedApplication.end(); ++it) {
        if ((*it)->getBusinessNumber() == businessNumber) {
            delete* it;  // 해당 recruitment 객체 삭제
            ownedApplication.erase(it);  // 리스트에서 제거
            break;
        }
    }
}