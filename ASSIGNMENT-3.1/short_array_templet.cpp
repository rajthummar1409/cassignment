#include <iostream>

using namespace std;

template <class tem>
class A
{

    tem a[10] = {10, 50, 20, 30, 60, 40, 90, 70, 80, 0};

    int i, j, temp;

public:
    A(tem a[])
    {

        this->i = i;
        this->j = j;
        this->temp = temp;
    }
    void display()
    {
        for (i = 0; i < 10; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            
            
            cout << " " << a[i];
        }
    }
};

int main()
{

    A<int> a1(0);
   cout<<" Short Array :"<<endl;
    a1.display();
}