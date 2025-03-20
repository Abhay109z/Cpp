#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is the maximum number"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is the maximum number"<<endl;
    }
    else
    {
        cout<<c<<" is the maximum number"<<endl;
    }
    return 0;
}