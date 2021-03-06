#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    ll n, x, sum = 0;
    cin >> n >> x;

    vector<int> out(n);
    vector<ll> q(n);

    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
        sum += q[i];
    }

    while (sum > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (q[i] == 0)
                continue;
            else if (q[i] > 0)
            {
                if (q[i] - x < 0)
                {
                    sum -= q[i];
                }
                else
                    sum -= x;
                q[i] = q[i] - x;
                if (q[i] < 0)
                {
                    q[i] = 0;
                    out.push_back(i + 1);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << out[i] << " ";
}

int main()
{
    int t, i = 0;
    cin >> t;

    while (i < t)
    {
        cout << "Case #" << ++i << ": ";
        solve();
        cout << endl;
    }
}