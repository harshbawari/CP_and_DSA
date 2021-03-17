#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> arr;

    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // for(ll i = d; i >= d - maxEle; i--) {

    // }
    ll maxDiff = 0;
    for (ll i = 0; i < n; i++)
    {
        ll diff = d % arr[i];

        if (diff > maxDiff)
        {
            maxDiff = diff;
        }
    }

    cout << d - maxDiff << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
    }
}