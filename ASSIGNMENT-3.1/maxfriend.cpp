#include<iostream>

using namespace std;

class A{

    int a;
    int b;

    public:

    A(int a,int b){

        this->a=a;
        this->b=b;
    }
    friend void max(A &);
};

void max(A &m1){

    cout<<"Enter the value "<<m1.a<<endl;
    cin>>m1.a;
    cout<<"Enter the value "<<m1.b<<endl;
    cin>>m1.b;

    if(m1.a>m1.b){

        cout<<"a is grater "<<m1.a<<endl;
    }
    else{
        if(m1.a<m1.b){

            cout<<"b is grater "<<m1.b<<endl;
        }
        else{
         
         cout<<"a and b is equal "<<m1.a<<"="<<m1.b<<endl;

        }

    }
}

int main(){

    A c1(0,0);
    max(c1);

    return 0;

}