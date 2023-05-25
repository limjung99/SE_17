#ifndef USERS_H
#define USERS_H
#include <string>
#include <vector>
#include "Recruitment.h"
using namespace std;

class User{
    private:
        string id;
        string pw;
        vector<Recruitment*> recruitments;
    public:
        string getID();
        string getPW();

        vector<Recruitment*> getRecruitmentList();
        void addRecruitment(Recruitment* recruitment); 

        virtual string getName()=0;
        virtual int getNum()=0;

};

class GeneralUser:public User {
    private:
        string name;
        int resiNum;
    public:
        GeneralUser(string id,string pw,string name,int resiNum);
        virtual string getName();
        virtual int getNum();

};

class CompanyUser:public User {
    private:
        string comName;
        int busiNum;
    public:
        CompanyUser(string id,string pw,string comName,int busiNum);
        virtual string getName();
        virtual int getNum();

};

#endif