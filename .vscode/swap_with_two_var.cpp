#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"before swap: "<<a<<"\t"<<b<<"\t"<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap: "<<a<<"\t"<<b<<"\t"<<endl;
    return 0;
}