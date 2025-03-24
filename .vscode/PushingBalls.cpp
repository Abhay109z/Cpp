#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector <string> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                if(a[i][j]=='0')
                    continue;

                bool check = true;
                for(int k=0;k<i;++k){
                    if(a[k][j]=='0'){
                        check = false;
                        break;
                    }
                }
                if(check)
                    continue;
                check = true;
                for(int k=0;k<j;++k){
                    if(a[i][k]=='0'){
                        check = false;
                        break;
                    }
                }
                if(check == false){
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}