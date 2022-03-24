#include<iostream>
using namespace std;
int main()
{
long long num,n;
int i,lastdigit;
int freq[10];
cout<<"enter num=";
cin>>num;

for(i=0;i<=9;i++)
freq[i]=0;

for(n=num;n!=0;freq[lastdigit]++)
{
    lastdigit=n%10;
n/=10;
}
for(i=0;i<10;i++)
cout<<"freq of"<<i<<"is="<<freq[i]<<endl;

return 0;

}
