#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"enter ages";
cin>>a>>b>>c;

if(a>b&&b>c)
cout<<"a is oldest,c is youngest";
else if(a>b&&a<c)
cout<<"c is oldest,b is young";
else if(b>a&&a<c)
cout<<"b is oldest,a is youngest";
else if(b>a&&b<c)
cout<<"c is oldest,a is youngest";
else if(c>a&&a<b)
cout<<"c is oldest,a is youngest";

return 0;
}
