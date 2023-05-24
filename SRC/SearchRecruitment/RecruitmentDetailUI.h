#include "ManageApplication.h"
#include "GeneralUser.h"
#include "Recruitment.h"

// 채용지원 usecase
class RecruitmentDetailUI {
    private:
        ManageApplication* manageApplication;
    public:
        void applyRecruitment(GeneralUser &generaluser, Recruitment &recruitment);
};