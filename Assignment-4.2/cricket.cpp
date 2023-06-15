#include <iostream>
using namespace std;

class Cricket
{
protected:
    int total_run, total_out, avg_runs;
    int perfomans = 123;

public:
    void setData(int total_run, int total_out, int avg_runs)
    {

        this->total_run = total_run;
        this->total_out = total_out;
        this->avg_runs = avg_runs;
    }
};
class derived : public Cricket
{
public:
    void displayData()
    {
        cout << "total run " << total_run << endl;
        cout << "total out " << total_out << endl;
        cout << "avg run are " << (float)total_run / (float)total_out << endl;
        cout << "perfomance is " << perfomans << endl;
        avg_runs = (float)total_run / (float)total_out;
    }
};

int main()
{
    derived d1;
    d1.setData(150000, 200, 0);
    d1.displayData();

    return 0;
}