#include "../Recruitment/Recruitment.h"
#include "../User/GeneralUser.h"
#include "../Collections/RecruitmentCollection.h"

// 지원정보조회, 지원취소 usecase
class ManageApplication {
    RecruitmentCollection* recruitmentcollection;
public:
    void checkApplications(GeneralUser *generaluser);
    void selectApplication(GeneralUser* generaluser, int businessNumber);
};
