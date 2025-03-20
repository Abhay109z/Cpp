#include<iostream>
using namespace std;
class biodata{
    public:
    int age;
    string name;
    int codeforces_rating;
    int codechef_rating;
};
int main()
{
    biodata b;
    cout<<"enter age:";
    cin>>b.age;
    cout<<"enter name:";
    cin>>b.name;
    cout<<"enter codeforces rating:";
    cin>>b.codeforces_rating;
    cout<<"enter codechef rating:";
    cin>>b.codechef_rating;
    cout<<"age:"<<b.age<<endl;
    cout<<"name:"<<b.name<<endl;    
    cout<<"codeforces rating:"<<b.codeforces_rating<<endl;
    cout<<"codechef rating:"<<b.codechef_rating<<endl;
    return 0;
}
