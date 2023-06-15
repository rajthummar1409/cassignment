#include <iostream>

using namespace std;

void Area(int r)
{

    cout << "Area of circle : " << 3.14 * r * r << endl;
}

void Area(int l, int w)
{

    cout << "Area of Rectangle : " << l * w << endl;
}

void Area( float h, float b)
{

    cout << "Area of Trangle :" << 0.5* h * b << endl;
}

int main()
{

    Area(5);

    Area(10, 20);

    Area((float)10.0,20.0);

    return 0;
}
