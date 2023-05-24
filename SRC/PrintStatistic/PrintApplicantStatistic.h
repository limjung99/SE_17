#include "PrintStatistic.h"

class PrintApplicantStatistic :: public printstatistic {
private:
    int applicantNumber;

public:
    void PrintStatistic() override;
    void print();
};

#endif