#include "RecruitmentAddUI.h"

RecruitmentAddUI::RecruitmentAddUI(){
    this->recruitmentadd = new RecruitmentAdd();
}

void RecruitmentAddUI::addNewRecruitment(CompanyUser *companyuser,string task,int headcount,string deadline){
    this->recruitmentadd->addRecruitment(companyuser,task,headcount,deadline);
}

