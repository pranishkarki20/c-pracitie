#include <iostream>
using namespace std; 

class employee 
{
    private :
    int  salarly ;
    public :
    string  name ;
    char position ;
    void setdata(int salarl );
    void getdata(){
        cout << "the value of a is " << name << endl;
    };

} harry ;
void employee :: setdata( int salarl ){
     salarly = salarly;
    
}
int main(){ 
    harry.name =("am");
    harry.setdata(100000);
    harry.getdata();
}