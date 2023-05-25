#include "Users.h"

string User::getID(){
    return this->id;
}

string User::getPW(){
    return this->pw;

}

vector<Recruitment*> User::getRecruitmentList(){
    return this->recruitments;
}

void User::addRecruitment(Recruitment* recruitment){
    this->recruitments.push_back(recruitment);
}

string GeneralUser::getName(){
    return this->name;
}

int GeneralUser::getNum(){
    return this->resiNum;
}

string CompanyUser::getName(){
    return this->comName;
}

int CompanyUser::getNum(){
    return this->busiNum;
}