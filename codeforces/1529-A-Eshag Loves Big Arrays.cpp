#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--){
        int k; cin>>k;
        int arr[k];
        for(int i = 0; i < k; i++){
            cin>> arr[i];
        }
        int f;
        f = *min_element(arr, arr+ k);
        cout << k - count(arr, arr + k , f) << endl;

    }
}