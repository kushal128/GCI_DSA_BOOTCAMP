#include<iostream>
using namespace std;
int main()
{
int n,last,first,s;
cout<<"enter num";
cin>>n;
last=n%10;
for(first=n;first>=10; )
{
first=first/10;
}
cout<<"last="<<last<<endl;
cout<<"first="<<first<<endl;

s=first;
first=last;
last=s;
cout<<"first="<<first;
cout<<"last="<<last;
}
