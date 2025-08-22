#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,i,n;
    cout<<"enter the number:";
    cin>>n;
cout<<n1<<endl;
//cout<<n2<<endl;

for(i=0;i<n;i++)
{
    n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<n3<<endl;
}
return 0;
}