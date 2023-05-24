#include "RecruitmentCollection.h"

void RecruitmentCollection::addRecruitment(string task,int headcount,string deadline){
    this->ownedRecruitment.push_back(Recruitment(task,headcount,deadline));
}

void RecruitmentCollection::printRecruitment(){
    for(int i=0;i<this->ownedRecruitment.size();i++){
        ownedRecruitment[i].show_detail();
    }
}

/*
RecruitmentCollection* recruitmentcollection�� ������ addNewApplication��
�����Ѵٰ� ������(����� collection�� ������ �Ǿ����� ���� ���·� ������
*/
void RecruitmentCollection::addNewApplication(string companyName, int businessNumber,
                                    string task, int headcount, string deadline) {
    this->ownedApplication.push_back(Recruitment(companyName, businessNumber, 
                                                task, headcount, deadline));
}

// �ڽ��� ���۷����ϰ� �ִ� ��� recruitment ���
void RecruitmentCollection::printApplications() {
    for (int i = 0; i < this->ownedRecruitment.size(); i++) {
        ownedRecruitment[i].getInfo();
    }
}

void RecruitmentCollection::cancelApplication(int businessNumber) {
    // businessNumber�� ��ġ�ϴ� recruitment�� ã�� ����(���)
    for (auto it = ownedApplication.begin(); it != ownedApplication.end(); ++it) {
        if ((*it)->getBusinessNumber() == businessNumber) {
            delete* it;  // �ش� recruitment ��ü ����
            ownedApplication.erase(it);  // ����Ʈ���� ����
            break;
        }
    }
}