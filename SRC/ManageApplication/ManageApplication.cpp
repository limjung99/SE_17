#include "ManageApplication.h"

// generaluser�ν��Ͻ��� ��� �������� ����ϴ� �Լ�
void ManageApplication::checkApplications(GeneralUser *generaluser) { 
    recruitmentcollection = generaluser->getRecruitmentCollection();
    recruitmentcollection->printApplications();
    return;
}

// generaluser�� ��������� application�� �����ϰ� ����ϴ� �Լ�
void ManageApplication::selectApplication(GeneralUser *generaluser, int businessNumber) {
    recruitmentcollection = generaluser->getRecruitmentCollection();
    Recruitment* selectedApplication = recruitmentCollection->cancelApplication(businessNumber);
}