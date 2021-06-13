#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        long f; cin >> f;
        if(f%2 == 0){
            cout << (f/2)-1 << endl;
        }
        else{
            cout << (f/2) << endl;
        }
    }
}