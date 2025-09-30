#include <iostream>
using namespace std; 

class student {
    private :
    int marks;
    char calculatorgrade(){
        if (marks >= 50 ) return 'p';
        else return 'f';
    }
    public :
     string name ;

     void setmarks( int m) {
        marks = m ;
     }
     void getdata(){
        cout << "marks" << marks << endl;
        cout << "grade " << calculatorgrade() << endl;
     }
} Ram ;

int main (){
    Ram.name = "Ram";
    Ram.setmarks (100);
}