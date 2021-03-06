#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n, m, count = 0;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            char temp;
            cin >> temp;

            if(i == n-1 && temp == 'D')
                count++;
            else if(j == m-1 && temp == 'R')
                count++;
        }

    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;
    while(t--){
        solve();
    }
}