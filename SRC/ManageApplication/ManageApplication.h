#include "../Recruitment/Recruitment.h"
#include "../User/GeneralUser.h"
#include "../Collections/RecruitmentCollection.h"

// ����������ȸ, ������� usecase
class ManageApplication {
    RecruitmentCollection* recruitmentcollection;
public:
    void checkApplications(GeneralUser *generaluser);
    void selectApplication(GeneralUser* generaluser, int businessNumber);
};
