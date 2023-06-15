#include<iostream>

using namespace std;

class A{

    int a[6],i;

    public:

    void setData(){

        for(i=0;i<6;i++){

            cout<<"Enter the value : ";
            cin>>a[i];
        }
    }

    void display(){

        for(i=0;i<6;i++){

            cout<<a[i];
        }
    }

    A operator+(A obj){

        A temp;

        for(i=0;i<6;i++){
        temp.a[i]=a[i]+obj.a[i];
        }
   return temp;
    }
};

int main(){

    A a1;
    a1.setData();

    A a2;
    a2.setData();
    A a3=a1+a2;
    cout<<"Addition of Two 1D metrix : ";
    a3.display();

    return 0;
}


