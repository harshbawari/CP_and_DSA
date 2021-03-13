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
  ll n;
  cin >> n;

  vector<ll> arr;

  for(ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    arr.push_back(temp);
  }

  ll curDiff = arr[1] - arr[0];
  ll longestCount = 2;
  ll count = 2;
  for(ll i = 2; i < n; i++) {
    ll diff = arr[i] - arr[i-1];
    //cout << "diff: " << diff << " curDiff: " << curDiff << endl;
    if(diff != curDiff) {
      if(count > longestCount) {
        longestCount = count;
      }
      curDiff = diff;
      count = 2;
      curDiff = diff;
    } else {
      //cout << "i: " << i << " count: " << count << endl;
      count++;
    }
  }
  if(count > longestCount) {
    longestCount = count;
  }

  cout << longestCount << endl;
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