#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, a[100];
    cin >> n;

    for(int i = 1, j = 0, k = n - 1; i <= n; i++){
        if(i % 2 != 0){
            a[j] = n-i+1;
            j++;
        }
        else
        {
            a[k] = n-i+1;
            k--;
        }
        
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}