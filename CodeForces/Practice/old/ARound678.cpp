#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m, sum = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }

    if (sum == m)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}