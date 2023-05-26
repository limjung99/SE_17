#include "Withdraw.h"

WithdrawUI::WithdrawUI(vector<User*> userList){
    withdraw = new Withdraw(userList);
}

void WithdrawUI::withdrawUser(User* user){
    withdraw->withdrawUser(user);
}

Withdraw::Withdraw(vector<User*> userList){
    this->userlist = &userList;
}

void Withdraw::withdrawUser(User* user){
   for (auto it = this->userlist->begin(); it != this->userlist->end(); ++it) {
        User* currentUser = *it;
        if (user->getID() == currentUser->getID()) {
            string tmpID = user->getID();
            delete currentUser;
            cout << "1.2. 회원탈퇴\n";
            cout << "> " << tmpID << "\n";
            // 현재 요소를 삭제한 후에는 이터레이터를 무효화
            this->userlist->erase(it);
            break; 
        }
    }
}