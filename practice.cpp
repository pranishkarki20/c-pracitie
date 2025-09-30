#include <iostream>
using namespace std ; 

class students{
    private :
    string name;
    float marks ;
    char calculategrade(){
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 50) return 'C';
        else return 'F';
    }
    public :
        void setdata(string n , int m){
            name = n ;
            marks = m ;
        }

         void  display(){
            cout << "Your name is "  << name  << endl ;
            cout << "The Marks you have obtained is " << marks << endl;
            cout << "The grade  you have obatined is " << calculategrade() << endl ;
         
        }
};
int main(){
  students s1;
  s1.setdata( "Ram" , 82);
  s1.display();
}
