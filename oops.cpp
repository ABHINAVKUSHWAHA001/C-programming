#include<iostream>
using namespace std;
class teacher{
    public :
    string name ;
    string dept;
    string subject;
    float salary;
    
     //void changedept (  string newdept){
       // dept = newdept ;

     //}
    };
    int main ()
    {
        teacher t1;
        t1.name    ="Abhi";
        t1.dept    ="computer science ";
        t1.subject ="c++";
        t1.salary  =20000;
        cout<<t1.name<<endl;
 cout<<t1.dept<<endl;
 cout<<t1.subject<<endl;
  cout<<t1.salary<<endl;
    return 0;
    }
