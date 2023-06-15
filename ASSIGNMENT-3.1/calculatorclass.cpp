#include <iostream>

using namespace std;

class cal
{

    int a, b;

public:
    cal(int x, int y)
    {

        a = x;
        b = y;
    }
    void addition()
    {
        cout << "addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void substraction()
    {
        cout << "substraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void multiplication()
    {
        cout << "multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    void division()
    {
        cout << "division of  " << a << " and " << b << " is " << (float)a / b << endl;
    }
};

int main()
{
    cal c1(5, 10);

    c1.addition();
    c1.substraction();
    c1.multiplication();
    c1.division();

    return 0;
}
