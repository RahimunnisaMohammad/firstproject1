#include<iostream>
using namespace std;
int main()
{
    int n,s=0,r;
    cout<<"Enter a number";
    cin>>n;
    while(n>0)
    {
               r=n%10;
               s=(s*10)+r;
               n=n/10;
    }
    cout<<"reverse is:"<<s<<endl;
    if(rev==n)
    {
        cout<<"This is a palindrome"<<endl;
    }
    else
    {
        cout<<"NOt a Palindrome"<<endl;
    }
    return 0;
}

