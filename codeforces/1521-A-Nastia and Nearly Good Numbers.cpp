#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        long long a; long long b;
        cin >> a >> b;
    if(b==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" <<endl;
        cout << a*(b+1) << " " << a*(b-1) << " " << 2*a*(b) << endl;
    }
    }
}