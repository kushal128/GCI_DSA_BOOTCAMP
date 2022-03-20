#include<iostream>
using namespace std;

int main()
{
int a,b;
float n;
cout<<"num of class attended=";
cin>>a;
cout<<"num of class held=";
cin>>b;
n=a*(100.0/b);
cout<<"percentage="<<n<<endl;
if(n>=75)
cout<<"you can sit in exam";
else
cout<<"can't sit in exam";

return 0;

}
