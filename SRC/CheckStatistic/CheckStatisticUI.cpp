#include "GeneralUser.h"
#include "CompanyUser.h"
#include "../PrintStatistic/PrintStatistic.h"
#include "CheckStatisticUI.h"

using namespace std;

void CheckStatisticUI::printStatistics() {
    PrintStatistic* printStatistic = new PrintStatistic(); // 적절한 PrintStatistic의 인스턴스를 생성해야 합니다.

    CheckStatisticUI checkStatisticUI;
    checkStatisticUI.setPrintStatistic(printStatistic);

    checkStatisticUI.printStatistics();

    delete printStatistic;

}
