#include "RecruitmentCollection.h"

void RecruitmentCollection::addRecruitment(string task,int headcount,string deadline){
    this->ownedRecruitment.push_back(Recruitment(task,headcount,deadline));
}

void RecruitmentCollection::printRecruitment(){
    for(int i=0;i<this->ownedRecruitment.size();i++){
        ownedRecruitment[i].show_detail();
    }
}
