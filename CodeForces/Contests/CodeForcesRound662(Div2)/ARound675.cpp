#include <bits/stdc++.h>

#define li long int
#define ll long long

using namespace std;

void solve()
{
    ll a, b, c;

    cin >> a >> b >> c;

    ll base = abs(c - a), height = b;

    ll hyp = sqrt((base * base) + (height * height));

    cout << hyp << endl;
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