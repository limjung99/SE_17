#include "Recruitment.h"

Recruitment::Recruitment(string task,int headcount,string deadline,CompanyUser *companyuser){
    this->task = task;
    this->deadline = deadline;
    this->headcount = headcount;
    this->companyuser = companyuser;
}


Recruitment::Application(string task, int headcount, string deadline, string companyName,
                            int businessNumber, GeneralUser* generaluser) {
    this->task = task;
    this->deadline = deadline;
    this->headcount = headcount;
    this->companyName = companyName;
    this->businessNumber = businessNumber;
    this->generaluser = generaluser;
}

string Recruitment::getTask() { return task; }

int Recruitment::getHeadCount() { return headcount; }

string Recruitment::getDeadLine() { return deadline; }

string Recruitment::getCompanyName() { return companyName; }

int Recruitment::getBusinessNumber() { return businessNumber; }
