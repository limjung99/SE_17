#include "ManageApplication.h"

// generaluser�ν��Ͻ��� ��� �������� ����ϴ� �Լ�
void ManageApplication::manageapplication(GeneralUser& generaluser) { 
    vector<Recruitment*> recruitmentList = generaluser.getRecruitmentsList();
    for (int i = 0; i < companyuser.getRecruitmentsNumber(); i++) {
        recruitmentList[i]->show_detail();
    }

}