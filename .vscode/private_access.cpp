#include<iostream>
using namespace std;
class circle
{
    private:
    double radius;
    public:
    circle(double r)
    {
        radius = r;
    }
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    circle obj(5.0);
    obj.compute_area();

    cout << obj.compute_area() << endl;
    return 0;
}