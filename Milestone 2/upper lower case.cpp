#include<iostream>
using namespace std;

int main()
{
char ch;
cout<<"enter character=";
cin>>ch;
if(ch>='a'&&ch<='z')
    cout<<"lower case";
else if(ch>='A'&&ch<='Z')
    cout<<"upper case";
else
    cout<<"not an alphabet";
return 0;

}
