#include "PrintApplicantStatistic.h"
#include <iostream>

using namespace std;

void PrintApplicantStatistic::printStatistic() {
    // 특정 출력 형식으로 applicantNumber를 출력하는 기능 구현
    cout << "Applicant statistics: " << applicantNumber << endl;
}

void printApplicantStatistic::print() {
    printStatistic();
}
