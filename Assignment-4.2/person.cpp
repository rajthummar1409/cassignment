#include <iostream>

using namespace std;

class student
{

    float percentage;

public:
    void setStudent(float percentage)
    {

        this->percentage = percentage;
    }
    void getStudent()
    {

        cout << "percentage : " << percentage << endl;
    }
};
class teacher
{

    float salary;

public:
    void setTeacher(float salary)
    {

        this->salary = salary;
    }
    void getTeacher()
    {

        cout << "Salary : " << salary << endl;
    }
};

class person : public student, public teacher
{

    string name;
    int age;

public:
    void setperson(string name, int age)
    {

        this->age = age;
        this->name = name;
    }
    void getperson()
    {

        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
int main()
{

    person p1;

    p1.setperson("Arpit", 23);
    p1.getperson();
    p1.setStudent((float)95.55);
    p1.getStudent();
    p1.setperson("Rakesh", 45);
    p1.getperson();
    p1.setTeacher((float)80000.45);
    p1.getTeacher();
}