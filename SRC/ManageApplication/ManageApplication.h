#include "../Recruitment/Recruitment.h"
#include "../User/GeneralUser.h"
#include "../Collections/RecruitmentCollection.h"
// #define Max_Length 1000

// 지원정보조회, 지원취소 usecase
class ManageApplication {
    RecruitmentCollection* recruitmentcollection;
public:
//    void startInterface();
    void checkMyRecruitment(GeneralUser *generaluser);
    void selectApplication();
};