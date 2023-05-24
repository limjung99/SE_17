#include "GeneralUser.h"
#include "CompanyUser.h"
#include "../PrintStatistic/PrintStatistic.h"
#include "CheckStatisticUI.h"

using namespace std;

void CheckStatisticUI::printStatistics() {
    PrintStatistic* printStatistic = new PrintStatistic(); // ������ PrintStatistic�� �ν��Ͻ��� �����ؾ� �մϴ�.

    CheckStatisticUI checkStatisticUI;
    checkStatisticUI.setPrintStatistic(printStatistic);

    checkStatisticUI.printStatistics();

    delete printStatistic;

}
