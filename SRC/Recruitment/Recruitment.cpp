#include "Recruitment.h"

Recruitment::Recruitment(string task,int headcount,string deadline,CompanyUser *companyuser){
    this->task = task;
    this->deadline = deadline;
    this->headcount = headcount;
    this->companyuser = companyuser;
}

string Recruitment::getTask() {return task;}

int Recruitment::getHeadCount() {return headcount;}

string Recruitment::getDeadLine() {return deadline;}