#include<iostream>

using namespace std;


template <class tem1,class tem2>
class A{

   tem1 a;
   tem2 b;
  int temp;
   public:

   A(tem1 a,tem2 b){

    this->a=a;
    this->b=b;
   }

   void Display()
{

    cout << "Before Swapping: " << a << " " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping: " << a << " " << b << endl;
}
};




int main(){

    A <int,int> a1(10,20);

    a1.Display();

return 0;
}
