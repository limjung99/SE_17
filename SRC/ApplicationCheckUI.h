#include "GeneralUser.h"
#include "ManageApplication.h"
using namespace std;


class ApplicationCheckUI {
    ManageApplication* manageapplication;
public:
    string startInterface();
    void checkMyRecruitment(GeneralUser& generaluser);
};