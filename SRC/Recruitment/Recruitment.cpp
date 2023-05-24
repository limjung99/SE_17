#include "Recruitment.h"
#include <iostream>>
using namespace std;
Recruitment::Recruitment(string task,int headcount,string deadline){
    this->task = task;
    this->deadline = deadline;
    this->headcount = headcount;
}

void Recruitment::show_detail(){
    cout<<"{"<<getTask()<<" "<<getHeadCount()<<" "<<getDeadLine()<<"}\n";
}

string Recruitment::getTask() {return task;}

int Recruitment::getHeadCount() {return headcount;}

string Recruitment::getDeadLine() {return deadline;}