#include "printApplicantStatistic.h"
#include <iostream>

using namespace std;

void printApplicantStatistic::printStatistic() {
    // Ư�� ��� �������� applicantNumber�� ����ϴ� ��� ����
    cout << "Applicant statistics: " << applicantNumber << endl;
}

void printApplicantStatistic::print() {
    printStatistic();
}
