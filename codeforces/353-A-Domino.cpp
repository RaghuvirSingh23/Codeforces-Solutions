#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int up[n];
    int low[n];
    int upsum = 0, lowsum = 0;
    for(int i = 0; i < n; i++){
        int a; int b;
        cin >> a >> b;
        up[i] = a; 
        low[i] = b;
        upsum += a;
        lowsum += b;

    }
    if(upsum %2 == 0 && lowsum%2 == 0){
        cout << 0;
    }
    else if((upsum + lowsum)%2 != 0){
        cout << -1;
    }
    else{
        int flag = 1;
        for(int j = 0; j < n; j++){
            if(up[j] %2 == 1 && low[j]%2 == 0){
                cout << 1;
                flag--;
                break;
            }
            else if(up[j] %2 == 0 && low[j]%2 == 1){
                cout << 1;
                flag--;
                break;
            }
        }
        if(flag){
            cout << -1;
        }
    }

}
