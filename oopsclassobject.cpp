#include<iostream>
#include<string>
using namespace std;
class teacher {
    public:
    string name;
    string sub;
    string dept;
    float salary;

   void changedept (string newdept)
 { dept = newdept;
 }
};

int main()
{
        teacher t1;
        t1.name = "Abhi";
        t1.sub = "c++";
        t1.dept = " computer science";
        t1.salary = 6000;

        cout<<t1.salary<<endl;
        cout<<t1.sub<<endl;

return 0;
}