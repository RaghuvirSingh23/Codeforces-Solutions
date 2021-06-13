#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        int l,b; cin >> l >> b;
        int min, max;
        if(l > b){
            min = b;
            max = l;
        }
        else{
            min = l;
            max = b;
        }
        if(max> 2*min){
            cout << max*max << endl;
        }
        else{
            cout << 4*min*min << endl;
        }
    }
}