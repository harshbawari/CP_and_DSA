#include <bits/stdc++.h>

#define db1(x) cout << #x << "=" << x << '\n'
#define db2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)

using namespace std;
using ll = long long;

void solve()
{
  ll n, u, v;
  cin >> n >> u >> v;

  ll max_dif = 0;
  vector<ll> blocks;
  for(ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    blocks.push_back(temp);
    if(i > 0) {
      ll diff = abs(blocks[i] - blocks[i-1]);
      if(diff >= 2) {
        max_dif = diff;
        break;
      }
      if(diff > max_dif) {
        max_dif = diff;
      }
    }
  }

  if(max_dif == 0) {
    cout << min((u + v), (v + v)) << endl;
  } else if(max_dif == 1) {
    cout << min(u, v) << endl;
  } else if(max_dif >= 2) {
    cout << 0 << endl;
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}