#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter a character:";
    cin>>c;
    if(c=='a' ||c=='A' ||c=='e' ||c=='E' ||c=='i' ||c=='I' ||c=='o' ||c=='O' ||c=='u' ||c=='U')
    {
        cout<<"vowel"<<endl;
    }
    else
    {
        cout<<"consonant"<<endl;
    }
    return 0;

}