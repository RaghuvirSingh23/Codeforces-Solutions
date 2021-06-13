#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        int x; cin >> x;
        vector<long long int> v1;
        while(x--){
            int y; cin >> y;
            v1.push_back(y);
        }
        sort(v1.begin(), v1.end());
        int c; 
        c = unique(v1.begin(), v1.end()) - v1.begin();
        cout << c << endl;
    }
    
}