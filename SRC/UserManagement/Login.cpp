#include "Login.h"
#include "../User/User.h"
using namespace std; 

/* control 의 함수 호출, 로그인 된 user instance의 포인터 반환 */
User* LoginUI::loginRequest(string ID, string PW){
    return Login::login(ID, PW);
}

/* UserList의 login 호출, 로그인 된 user instance의 포인터 반환 */
User* Login::login(string ID, string PW){
    UserList lst = UserList::getInstance();
    return lst.login(ID, PW);
}
