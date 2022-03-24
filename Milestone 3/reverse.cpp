#include<iostream>
using namespace std;
int main()
{
int n,d,s=0;
cout<<"enter num=";
cin>>n;
for( ;n!=0;n=n/10)
{
d=n%10;
s=s*10+d;
}
cout<<"reverse="<<s;

return 0;
}
