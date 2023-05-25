#include "ManageApplication.h"
#include "GeneralUser.h"
#include "Recruitment.h"

// 채용지원 usecase
class RecruitmentApplyUI {
    private:
        ManageApplication* manageApplication;
    public:
        void applyRecruitment(User &generaluser, int busiNum);
};