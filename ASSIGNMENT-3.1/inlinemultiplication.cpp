#include<iostream>

using namespace std;

inline int multiplication(int a,int b){

    return a*b;
}
inline int cubic(int a,int b,int c){

    return a*b*c;
}

int main(){
  
    cout<<"Multiplication of a and b is "<<multiplication(10,5)<<endl;
    cout<<"Cubic value of a and b and c is "<< cubic(10,10,10)<<endl;
    return 0;
}