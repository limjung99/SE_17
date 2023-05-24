#include "System.h"


void System::run(){
    int menu_level_1;
    int menu_level_2;
    bool exit = false; 

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

                        }
                        else { /* 1 1 2 회사회원가입 */

                        }
                        break;
                    case 2 : /* 1 2 회원탈퇴*/

                        break;
                    default:
                        break;
                }
                break;

            case 2:
                switch (menu_level_2)
                {
                    case 1: /* 2 1 로그인*/
                        break;
                    case 2: /* 2 2 로그아웃*/
                        break; 
                    default:
                        break;
                }
                break;
            
            case 3:
                switch (menu_level_2)
                {
                    case 1: /* 3 1 채용정보등록 */
                        break;
                    case 2: /* 3 2 등록된 채용 정보 조회 */
                        break;
                    default:
                        break;
                }
                break;
            
            case 4:
                switch (menu_level_2)
                {
                    case 1: /* 4 1 채용정보검색*/
                        break;
                    case 2: /* 4 2 채용지원*/
                        break;
                    case 3: /* 4 3 지원정보조회*/
                        break;
                    case 4: /* 4 4 지원취소*/
                        break;                
                    default:
                        break;
                }
                break;

            case 5:
                switch (menu_level_2)
                {
                    case 1: /* 5 1 지원정보조회*/
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