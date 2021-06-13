#include <iostream>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    cin >> a;
    int amin = a;
    int amax = a;
    int mini = 0;
    int maxi = 0;
    int y;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a > amax)
        {
            amax = a;
            maxi = i;
        }
        if (a <= amin)
        {
            amin = a;
            mini = i;
        }
    }
    if(mini < maxi){
        y = 1;
    }
    else{
        y = 0;
    }
    cout << maxi + (n - 1 - mini) - y << endl;
    return 0;
}