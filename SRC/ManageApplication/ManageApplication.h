#include "../Recruitment/Recruitment.h"
#include "../User/GeneralUser.h"
#include "../Collections/RecruitmentCollection.h"
// #define Max_Length 1000

// ����������ȸ, ������� usecase
class ManageApplication {
    RecruitmentCollection* recruitmentcollection;
public:
//    void startInterface();
    void checkMyRecruitment(GeneralUser *generaluser);
    void selectApplication();
};