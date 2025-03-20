#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x = max(a,max(b,c));
    cout << x << " is the maximum number" << endl;
    return 0;
}