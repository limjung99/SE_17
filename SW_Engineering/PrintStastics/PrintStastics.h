#ifndef PRINT_STASTICS
#define PRINT_STASTICS
#include "../Users.h"
#include <vector>
#include <iostream>
using namespace std;

class PrintStasticsUI {
    PrintStastics* printStasticsController;
    public:
        PrintStasticsUI(vector<User*> userList);
        void printStastics(User* user);

};

class PrintStastics {
    vector<User*>* userList;
    public:
        PrintStastics(vector<User*> userList);
        void printStastics(User* user);
};


#endif