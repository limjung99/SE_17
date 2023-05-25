#include "CancleApplication.h"

CancleApplicationUI::CancleApplicationUI(vector<User*> userList){
    cancleApplicationController = new CancleApplication(userList);
}

void CancleApplicationUI::cancleApplication(vector<Recruitment*> findlist,int busiNum,User* user){
    cancleApplicationController->cancleApplication(findlist,busiNum,user);
}

CancleApplication::CancleApplication(vector<User*> userList){
    this->userList = &userList;
}

void CancleApplication::cancleApplication(vector<Recruitment*> findlist,int busiNum,User* user){
    for(int i=0;i<findlist.size();i++){
        if(busiNum == findlist[i]->getUser()->getNum()){
            string comName = findlist[i]->getUser()->getName();
            int num = findlist[i]->getUser()->getNum();
            cout<<"4.4 지원취소\n";
            cout<<"> "<<comName<<" "<<num<<"\n";
            delete findlist[i];
            break;
        }
    }
}