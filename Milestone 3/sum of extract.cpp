#include<iostream>
using namespace std;
int main()
{
int n,last,first;
cout<<"enter num";
cin>>n;
last=n%10;
for(first=n;first>=10; )
{
first=first/10;
}
cout<<"last="<<last<<endl;
cout<<"first="<<first<<endl;

cout<<"="<<first+last;

return 0;

}
