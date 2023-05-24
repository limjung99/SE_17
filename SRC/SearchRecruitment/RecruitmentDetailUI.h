#include "ManageApplication.h"
#include "GeneralUser.h"
#include "Recruitment.h"

class RecruitmentDetailUI {
        ManageApplication* manageApplication;
    public:
        void startInterface();
        void applyRecruitment(GeneralUser &generaluser, Recuitment &recruitment);
};