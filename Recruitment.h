#include <string>
using namespace std;

class Recruitment{
    private:
        string task;
        int headcount;
        string deadline;
    public:
        void show_detail();
        void listRecruitment();
        void getRecruitment();
};