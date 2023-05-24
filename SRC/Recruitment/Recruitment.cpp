#include "Recruitment.h"

Recruitment::Recruitment(string task,int headcount,string deadline,CompanyUser *companyuser, GeneralUser *generaluser){
    this->task = task;
    this->deadline = deadline;
    this->headcount = headcount;
    this->companyuser = companyuser;
    this->generaluser = generaluser;
}
