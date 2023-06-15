#include <iostream>

using namespace std;

class student
{

protected:
    int roll;

public:
    void setStudent(int roll)
    {

        this->roll = roll;
    }
    void getStudent()
    {

        cout << "Student Roll number :" << roll << endl;
    }
};

class test : public student
{

protected:
    int sub1;
    int sub2;

public:
    void setTest(int sub1, int sub2)
    {

        this->sub1 = sub1;
        this->sub2 = sub2;
    }
};

class result : public test
{

public:
    void getTest()
    {

        cout << "Subject 1 : " << sub1 <<endl<< "Subject 2 : " << sub2 << endl;
    }

    void getresult()
    {

        cout << "Total marks : " << sub1 + sub2 << endl;
    }
};
int main()
{

    result r1;

    r1.setStudent(123456);
    r1.getStudent();
    r1.setTest(95, 99);
    r1.getTest();
    r1.getresult();
    return 0;
}