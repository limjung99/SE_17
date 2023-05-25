#include <iostream>
#include "SearchRecruitment.h"
#include "CompanyUser.h"
#include "Recruitment.h"
using namespace std;

void SearchRecruitment::showRecruitment(string companyName) {
    // CompanyUser의 listRecruitment()을 호출하여 Recruitment 객체의 레퍼런스 리스트를 받아옴
    vector<Recruitment>& recruitmentList = companyuser.listRecruitment();

    // 리스트 내 각 Recruitment 객체의 멤버 변수를 출력
    for (const auto& recruitment : recruitmentList) {
        cout << recruitment.getCompanyName() << ' ';
        cout << recruitment.getBusinessNum() << ' ';
        cout << recruitment.getTask() << ' ';
        cout << recruitment.getHeadcount() << ' ';
        cout << recruitment.getDeadline() << ' ';
    }
}