#include <iostream>
using namespace std; 

class employee 
{
    private :
    int  salarly ;
    public :
    string  name ;
    char position ;
    void setdata(int salarl ) {
        salarly = salarl ;
    };
    void getdata(){
        cout << "the value of a is " << name << endl;
         cout << "the salarly of ram ud " << salarly;
    };

} harry ;

int main(){ 
    harry.name =("ram");
    harry.setdata(100000);
    harry.getdata();
}