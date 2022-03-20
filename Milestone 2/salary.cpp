#include<iostream>
using namespace std;

int main()
{
int s,n;
cout<<"enter salary=";
cin>>s;
cout<<"enter years of service=";
cin>>n;
if(n>5)
cout<<"salary to be paid="<<s+(s*(5.0/100));
else
cout<<"salary to be paid="<<s;

return 0;
}
