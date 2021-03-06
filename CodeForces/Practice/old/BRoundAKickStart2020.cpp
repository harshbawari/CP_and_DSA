#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, k, p, plates[50][30];

ll calc_sum(ll i, ll j, ll total)
{
  if (total > p || i > n)
  {
    return 0;
  }
  cout << i << j << total << endl;

  if (j > k)
  {
    return plates[i][j] + calc_sum(i + 1, 0, total + 1);
  }
  else
  {
    return plates[i][j] + calc_sum(i, j + 1, total + 1);
  }
}

void solve()
{
  cin >> n >> k >> p;

  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < k; j++)
    {
      cin >> plates[i][j];
    }

    reverse(plates[i], plates[i] + k);
  }

  ll sum = 0;
  for(ll i = 0; i < )

  cout << sum << endl;
}

int main()
{
  int t;

  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    cout << "Case #" << i << ": ";
    solve();
  }

  return 0;
}