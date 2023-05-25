#include "Recruitment.h"

Recruitment::Recruitment(string task,int headcount,string deadline,User* user){
    this->task = task;
    this->headcount = headcount;
    this->deadline = deadline;
    this->comUser = user;
}

string Recruitment::getTask(){
    return this->task;
}

int Recruitment::getHeadCount(){
    return this->headcount;
}

string Recruitment::getDeadLine(){
    return this->deadline;
}

User* Recruitment::getUser(){
    return this->comUser;
}

void Recruitment::apply(User* user){
    this->appliedUsers.push_back(user);
}

int Recruitment::getNumApplicant(){
    return this->appliedUsers.size();
}