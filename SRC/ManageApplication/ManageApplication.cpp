#include "ManageApplication.h"

// generaluser�ν��Ͻ��� ��� �������� ����ϴ� �Լ�
void ManageApplication::checkMyRecruitment(GeneralUser *generaluser) { 
    recruitmentcollection = generaluser->getRecruitmentCollection();
    recruitmentcollection->printRecruitment();
    return;
}

void selectApplication() {

}