#include "System.h"
#include "Users.h"
#include <iostream>
#include <vector>
#include "UserSignup/UserSignup.h"
#include "CompanySignup/CompanySignUp.h"
#include "Withdraw/Withdraw.h"
#include "Login/Login.h"
#include "Logout/Logout.h"
#include "AddRecruitment/AddRecruitment.h"
#include "CheckRecruitment/CheckMyRecruitment.h"
#include "SearchRecruitment/SearchRecruitment.h"
#include "ApplyRecruitment/ApplyRecruitment.h"
#include "CheckMyApplication/CheckMyApplication.h"
#include "CancleApplication/CancleApplication.h"
#include "PrintStastics/PrintStastics.h"
using namespace std;

void System::run(){
    /*
        시스템 인터페이스 변수 
    */
    int menu_level_1;
    int menu_level_2;
    bool exit = false; 
    /*
        회사이름으로 채용 검색후 recruitment table
    */
    vector<Recruitment*> findRecruitment;
    /*
        회원가입 user 테이블
    */
    vector<User*> userList;
    /*
        Recruitment 테이블 
    */
    vector<Recruitment*> recruitmentList;
    /*
       UI 인스턴스 
    */

    UserSignUpUI userSignUpUI = UserSignUpUI(userList);
    CompanySignUpUI companySignUpUI = CompanySignUpUI(userList);
    WithdrawUI withDrawUI = WithdrawUI(userList);
    LoginUI loginUI = LoginUI(userList);
    LogoutUI logoutUI = LogoutUI(userList);

    AddRecruitmentUI addRecruitmentUI = AddRecruitmentUI(recruitmentList);
    CheckMyRecruitmentUI checkMyRecruitmentUI = CheckMyRecruitmentUI(recruitmentList);
    /* -------- ok ----------- */
    SearchRecruitmentUI searchRecruitmentUI = SearchRecruitmentUI(userList);
    ApplyRecruitmentUI applyRecruitmentUI = ApplyRecruitmentUI(userList);
    CheckMyApplicationUI checkMyApplicationUI = CheckMyApplicationUI(userList);
    CancleApplicationUI cancleApplicationUI = CancleApplicationUI(userList);

    PrintStasticsUI printStasticsUI = PrintStasticsUI(userList);

    while(!exit){
        cin>>menu_level_1>>menu_level_2;
        switch (menu_level_1)
        {
            case 1: 
                switch (menu_level_2)
                {
                    case 1 : /* 1 1 회원가입 */
                        int usertype;
                        cin>>usertype;
                        if(usertype==1){/* 1 1 1 유저회원가입 */
                            string name; int resiNum; string id; string pw;
                            cin>>name>>resiNum>>id>>pw;
                            userSignUpUI.signUpGeneralUser(id,pw,name,resiNum);
                        }
                        else { /* 1 1 2 회사회원가입 */
                            string comName; int busiNum; string id; string pw;
                            cin>>comName>>busiNum>>id>>pw;
                            companySignUpUI.signUpCompanyUser(id,pw,comName,busiNum);
                        }
                        break;
                    case 2 : /* 1 2 회원탈퇴*/
                        withDrawUI.withdrawUser(this->user);
                        break;
                    default:
                        break;
                }
                break;

            case 2:
                switch (menu_level_2)
                {
                    case 1: /* 2 1 로그인*/
                       { 
                        string id; string pw;
                        cin>>id>>pw;
                        loginUI.login(id,pw,user);
                        break;
                       }
                    case 2: /* 2 2 로그아웃*/
                        {   
                            logoutUI.logout(user);
                            break;
                        }
                    default:
                        break;
                }
                break;
            case 3:
                switch (menu_level_2)
                {
                    case 1: /* 3 1 회사회원이 채용정보등록 */
                    {
                        string task; int headcount; string deadline;
                        cin>>task>>headcount>>deadline;
                        addRecruitmentUI.addRecruitment(user,task,headcount,deadline);
                        break;
                    }
                    case 2: /* 3 2 회사회원이 등록한 채용 정보 조회 */
                    {
                        checkMyRecruitmentUI.checkRecruitment(user);
                        break;
                    }
                    default:
                        break;
                }
                break;
            case 4:
                switch (menu_level_2)
                {
                    case 1: /* 4 1 채용정보검색*/
                        {
                            string comName;
                            cin>>comName;
                            findRecruitment = searchRecruitmentUI.searchRecruitment(user,comName);
                            break;
                        }
                    case 2: /* 4 2 채용지원*/
                        int busiNum;
                        cin>>busiNum;
                        applyRecruitmentUI.applyRecruitment(user,busiNum,findRecruitment);
                        break;
                    case 3: /* 4 3 지원정보조회*/
                        findRecruitment = checkMyApplicationUI.checkMyApplition(user);
                        break;
                    case 4: /* 4 4 지원취소*/
                        int busiNum;
                        cin>>busiNum;
                        cancleApplicationUI.cancleApplication(findRecruitment,busiNum,user);
                        break;                  
                    default:
                        break;
                }
                break;

            case 5:
                switch (menu_level_2)
                {
                    case 1: /* 5 1 지원정보통계*/
                        printStasticsUI.printStastics(user);
                        break;
                    default:
                        break;
                }
                break;
            case 6: /* 6 종료 */
                exit=true;
                break;
            default:
                break;
        }
    }

}