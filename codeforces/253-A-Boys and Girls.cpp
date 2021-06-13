#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m; cin >> n >> m;
    if(n>m){
        int diff = n-m;
        for(int i = 0; i < m; i++){
            cout << "BG";
        }
        for(int j = 0; j < diff; j++){
            cout << "B";
        }
    }
    else if(m>n){
        int diff = m-n;
        for(int i = 0; i < n; i++){
            cout << "GB";
        }
        for(int j = 0; j < diff; j++){
            cout << "G";
        }
    }
    else{
        for(int i = 0; i < n; i++){
            cout << "GB";
        }
    }

}
