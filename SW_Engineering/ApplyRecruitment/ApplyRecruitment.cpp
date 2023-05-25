#include "ApplyRecruitment.h"

ApplyRecruitmentUI::ApplyRecruitmentUI(vector<User*> userList){
    applyRecruitmentController = new ApplyRecruitment(userList);
}

void ApplyRecruitmentUI::applyRecruitment(User* user,int busiNum,vector<Recruitment*> recruitmentList){
    this->applyRecruitmentController->applyRecruitment(user,busiNum,recruitmentList);
}

ApplyRecruitment::ApplyRecruitment(vector<User*> userList){
    this->userList = &userList;
}

void ApplyRecruitment::applyRecruitment(User* user,int busiNum,vector<Recruitment*> recruitmentList){
    /* 특정 회사 이름으로 검색한 후, 회사의 채용 정보 리스트를 순회하면서 사업자 번호를 확인 후 등록하고 출력하는 함수 */
    for(int i=0;i<recruitmentList.size();i++){
        User* companyuser = recruitmentList[i]->getUser();
        if(companyuser->getNum() == busiNum){
            string comName = companyuser->getName();
            int num = companyuser->getNum();
            cout<<"4.2. 채용지원\n";
            cout<<"> "<<comName<<" "<<num<<"\n";
            recruitmentList[i]->apply(user);
        }
    }
}