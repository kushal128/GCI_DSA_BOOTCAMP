#include<iostream>
using namespace std;

int main()
{
int n,c;
float tc;
cout<<"enter num of products=";
cin>>n;
c=n*100;

if(c>1000)
{
tc=c*(90.0/100);
cout<<"total cost="<<tc;
}
else
{tc=c;
cout<<"total cost="<<tc;
}
return 0;
}
