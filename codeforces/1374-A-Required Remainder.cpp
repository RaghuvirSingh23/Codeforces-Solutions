#include <iostream>
using namespace std;

int main(){
    int y; cin>>y;
    while(y--){
        long long x,y,n; cin >> x >> y >> n;
        if((n%x)-y >= 0){
            cout<< n - ((n%x)-y) << endl;
        }
        else{
            cout << n - ((n%x)) - x + y << endl;
        }
    }
}