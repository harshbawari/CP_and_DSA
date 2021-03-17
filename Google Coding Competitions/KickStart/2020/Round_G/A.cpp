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
  string s;
  cin >> s;

  ll count = 0;
  ll kickCount = 0;
  for (ll i = 0; i < s.size(); i++)
  {
    if (s[i] == 'K' && s[i + 1] == 'I' && s[i + 2] == 'C' && s[i + 3] == 'K')
    {
      kickCount++;
      continue;
    }

    if (s[i] == 'S' && s[i + 1] == 'T' && s[i + 2] == 'A' && s[i + 3] == 'R' && s[i + 4] == 'T')
    {
      count += kickCount;
    }
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

  for (int i = 0; i < t; i++)
  {
    cout << "Case #" << i + 1 << ": ";
    solve();
  }

  return 0;
}