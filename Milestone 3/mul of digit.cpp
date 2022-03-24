#include<iostream>
using namespace std;
int main()
{
int n,d,m=1;
cout<<"enter num=";
cin>>n;
for( ;n!=0;n=n/10)
{
d=n%10;
m=m*d;
}
cout<<"mul of digits="<<m;

return 0;

}
