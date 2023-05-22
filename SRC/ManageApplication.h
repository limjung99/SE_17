#include "ApplicationCheckUI.h" // class diagram 수정 후 고치기
using namespace std;


class ApplicationCheckUI {
    ManageApplication* manageapplication;
public:
    string startInterface();
    void checkMyRecruitment(GeneralUser& generaluser);
};