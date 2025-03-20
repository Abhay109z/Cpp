#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"enter a number:";
    cin>>i;
    for(j=10; j>=1; j-=1)
    {
        cout<<i*j<<endl;
    }
    return 0;
}
