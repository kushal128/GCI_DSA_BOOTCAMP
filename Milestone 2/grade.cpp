#include<iostream>
using namespace std;

int main()
{
int m;
cout<<"enter marks";
cin>>m;

if(m>80)
cout<<"A grade";
else if(m>60&&m<=80)
cout<<"B grade";
else if(m>50&&m<=60)
cout<<"C grade";
else if(m>45&&m<=50)
cout<<"D grade";
else if(m>25&&m<=45)
cout<<"E grade";
else
cout<<"f grade";

return 0;



}
