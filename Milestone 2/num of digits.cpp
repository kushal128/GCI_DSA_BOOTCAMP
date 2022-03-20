#include<iostream>
using namespace std;
int main()
{
int n,c=0;
cout<<"enter num=";
cin>>n;
for( ;n!=0;n=n/10)
c=c+1;
cout<<"num of digits="<<c;
return 0;

}
