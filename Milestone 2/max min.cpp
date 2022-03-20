#include<iostream>
using namespace std;

int main()
{
int a,b,c,max,min;
cout<<"enetr any three values=\n";
cin>>a>>b>>c;
max=a;
min=c;
if(b>max)
 max=b;
if(c>max)
 max=c;
if(a<min)
 min=a;
if(b<min)
 min=b;

 cout<<"max="<<max<<endl;
 cout<<"min="<<min;


return 0;

}
