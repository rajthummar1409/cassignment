#include <iostream>

using namespace std;

class Bank
{
    int balance;
    string accountnum;
    string name;
    string accounttype;
    int newbalance;
    int newbalance1;

    public:
   
    void value(string name, string accountnum, string accounttype, int balance){

        this->name = name;
        this->accountnum = accountnum;
        this->accounttype = accounttype;
        this->balance = balance;
        
        cout <<"Account name:-"<< name << " " << endl;
        cout <<"Account number:-"<< accountnum << " " << endl;
        cout <<"Type:-"<< accounttype << " " << endl;
        cout <<"Account balance Rs:-"<<balance << endl;
    }
    
    void depositer(int depositer){

        cout << "Diposite amount Rs:-" << depositer <<endl<< "Total balance Rs:-" << balance + depositer << endl;
        newbalance = balance + depositer;
    
    }
    
    void withdraw(int withdraw){

        cout <<"Withdrw amount Rs:-" << withdraw << endl;
        newbalance1 = newbalance - withdraw;
    
    }
    
    void display(){

        cout <<"Account name:-"<< name <<endl<<"Current balance Rs:-"<<newbalance1<< endl;
    
    }
};
int main(){

    Bank b;
    
    b.value("Thummar Arpit Niteshbhai", "9106111121", "Saving account", 5000000);
    b.depositer(100000);
    b.withdraw(30000);
    b.display();
    
    return 0;
}

   