#include <bits/stdc++.h>

#define db1(x) cout << #x << "=" << x << '\n'
#define db2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)

using namespace std;
using ll = long long;

int sum = 0, rows, cols, totalPlates;
int plates[50][30];

int calc(int r, int c, int p, int s)
{
  if (r == rows)
  {
    return 0;
  }
  cout << "r: " << r << " c: " << c << " p: " << p << " s: " << s << " plates[r][c]: " << plates[r][c] << endl;
  if (p == totalPlates)
  {
    if (plates[r][c] + s > sum)
    {
      cout << "sum before: " << sum << endl;
      sum = plates[r][c] + s;
      cout << "sum after: " << sum << endl;
    }
    return 0;
  }

  int cur = plates[r][c];
  if (c == cols - 1)
  {
    return calc(r + 1, 0, p + 1, cur + s);
  }

  return calc(r, c + 1, p + 1, cur + s);
}

void solve()
{
  int n, k, p;
  cin >> n >> k >> p;
  rows = n;
  cols = k;
  totalPlates = p;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < k; j++)
    {
      cin >> plates[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    int tempSum = 0;
    for (int j = 0; j < k; j++)
    {
      calc(i, j, j + 1, tempSum);
      tempSum += plates[i][j];
    }
  }

  cout << sum << endl;
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