#include "Recruitment.h"

Recruitment::Recruitment(string task,int headcount,string deadline,CompanyUser *companyuser){
    this->task = task;
    this->deadline = deadline;
    this->headcount = headcount;
    this->companyuser = companyuser;
}

// getter 함수
string Recruitment::getCompanyName() {
    return companyuser->getCompanyName();
}

string Recruitment::getBusinessNum() {
    return companyuser->getBusinessNum();
}

string Recruitment::getTask() {
    return task;
}

int Recruitment::getHeadcount() {
    return headcount;
}

string Recruitment::getDeadline() {
    return deadline;
}

// setter 함수
void Recruitment::setTask(string& newTask) {
    this->task = newTask;
}

void Recruitment::setHeadcount(int newHeadcount) {
    this->headcount = newHeadcount;
}

void Recruitment::setDeadline(string& newDeadline) {
    this->deadline - newDeadline;
}

// 기타 멤버 함수
void Recruitment::show_dateil() {

} 
void Recruitment::listRecruitment() {

}
void Recruitment::getRecruitment() {

}
void Recruitment::addApplication(GeneralUser& generaluser) {

}