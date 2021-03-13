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
  ll  n, x;
  cin >> n >> x;

  vector<vector<ll>> q;

  for(ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    q.push_back({i+1, temp});
  }

  vector<ll> order;
  while(q.size() > 0) {
    if(q[0][1] - x <= 0) {
      order.push_back(q[0][0]);
    } else {
      q.push_back({q[0][0], q[0][1] - x});
    }
    q.erase(q.begin());
  }


  for(auto& o: order) {
    cout << o << " ";
  }

  cout << endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    cout << "Case #" << i + 1 << ": ";
    solve();
  }

  return 0;
}