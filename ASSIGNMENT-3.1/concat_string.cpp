#include<iostream>

using namespace std;

class A{

    string name;
    public:
    A()
    {
    }
    A(string name)
    {
        this->name=name;
        
    }
    void display()
    {
        cout <<name<<endl;
    }
    A operator+(A obj)
    {
        A temp;
        temp.name = name + obj.name;
       
        return temp;
    }
};

int main(){

    A a1(" Thummar "),a2(" Arpit "),a3(" Niteshbhai ");
   A a4=a1+a2+a3;
    a4.display();

    return 0;
}