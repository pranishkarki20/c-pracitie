#include <iostream>
using namespace std ; 

class bankaccount{
    private:
    float balance ; 
    int accountNumber ;

    string checkBalance() {
    if(balance < 500)
         return "Low Balance" ;
    else
        return "Good Balance";
}

    public:
    void setdata( float b , int a){
        balance = b ;
        accountNumber = a ;
    }
    void getdata (){
        cout << "Your account number  is " << accountNumber << endl;;
        cout << "Your Balance is " << balance  << endl; ;
        cout << "Your  Balance condition " << checkBalance() << endl;
    }

};
int main(){
    bankaccount b1;
    b1.setdata(1000,9036);
    b1.getdata();
}
