#include<iostream>
using namespace std;
int main()
{
int n,d,rev=0;
cout<<"enter num=";
cin>>n;
for( ;n!=0;n=n/10)
{
d=n%10;
rev=rev*10+d;
}
for( ;rev!=0;rev=rev/10)
{
switch(rev%10)
{
case 0:
cout<<"zero";
break;
case 1:
cout<<"one";
break;
case 2:
cout<<"two";
break;
case 3:
cout<<"three";
break;
case 4:
cout<<"four";
break;
case 5:
cout<<"five";
break;
case 6:
cout<<"six";
break;
case 7:
cout<<"seven";
break;
case 8:
cout<<"eight";
break;
case 9:
cout<<"nine";
break;
}
}
return 0;
}
