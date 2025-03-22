#include<iostream>
using namespace std;
class box
{
    public:
    double length;
    double breadth;
    double height;
};
int main()
{
    box b1;
    box b2;
    double volume = 0.0;
    b1.length = 5.0;
    b1.breadth = 6.0;   
    b1.height = 7.0;
    b2.length = 10.0;   
    b2.breadth = 12.0;
    b2.height = 13.0;
    volume = b1.length * b1.breadth * b1.height;
    cout << "Volume of Box1 : " << volume <<endl;
    volume = b2.length * b2.breadth * b2.height;
    cout << "Volume of Box2 : " << volume <<endl;
    return 0;
}